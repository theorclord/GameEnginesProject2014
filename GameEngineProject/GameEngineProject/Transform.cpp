#include "stdafx.h"
#include "Transform.h"

Transform::Transform(){
}

Transform::~Transform(){
}

void Transform::setSprite(string spritePath){
	sf::Texture spriteImg;
	spriteImg.loadFromFile(spritePath);
	Transform::tex = sf::Texture(spriteImg);
	Transform::sprite = sf::Sprite(tex);
}

sf::Sprite Transform::getSprite(){
	return Transform::sprite;
}

int Transform::getLayer(){
	return Transform::layer;
}

void Transform::setLayer(int layer){
	Transform::layer = layer;
}

void Transform::Update(){
	physics.Update();
	Transform::sprite.setPosition(Transform::sprite.getPosition().x+ std::get<0>(physics.getVelocity()),
		Transform::sprite.getPosition().y+ std::get<1>(physics.getVelocity()));
}

void Transform::setPhysics(Physics physics){
	Transform::physics = physics;
}

Physics Transform::getPhysics(){
	return Transform::physics;
}

bool Transform::DetectCollision(Transform transform){
	return false;
}