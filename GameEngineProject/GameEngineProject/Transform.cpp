# include "Transform.h"

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

int Transform::setLayer(int layer){
	Transform::layer = layer;
}

void Transform::addPhysics(Physics physics){
	Transform::physics = physics;
}

void Transform::Update(){
	physics.Update();
	Transform::sprite.setPosition(Transform::sprite.getPosition().x+ std::get<0>(physics.getVelocity()),
		Transform::sprite.getPosition().y+ std::get<1>(physics.getVelocity()));
}