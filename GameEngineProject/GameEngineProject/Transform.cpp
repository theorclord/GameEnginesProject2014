# include "Transform.h"
#include <cmath>

Transform::Transform(){
}

void Transform::setSprite(string spritePath){
	sf::Texture spriteImg;
	spriteImg.loadFromFile(spritePath);
	Transform::sprite = sf::Sprite(spriteImg);
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
	float dist = std::sqrtf(std::powf(transform.getSprite().getPosition().x - Transform::sprite.getPosition().x, 2) + 
		std::powf(transform.getSprite().getPosition().y - Transform::sprite.getPosition().y, 2));
	if (Transform::collider.DetectCollision(transform)){

	}
	return false;
}