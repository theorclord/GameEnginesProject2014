# include "Transform.h"

Transform::Transform(){
}

void Transform::setSprite(sf::Sprite sprite){

	Transform::sprite = sprite;
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

void Transform::setPhysics(Physics physics){
	Transform::physics = physics;
}

Physics Transform::getPhysics(){
	return Transform::physics;
}

void Transform::update(){
}