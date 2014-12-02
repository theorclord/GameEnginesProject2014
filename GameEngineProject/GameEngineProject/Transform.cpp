#include "stdafx.h"
#include "Transform.h"

Transform::Transform(){
}

Transform::~Transform(){
}

void Transform::setSprite(sf::Sprite sprite){

	Transform::sprite = sprite;
}

sf::Sprite Transform::getSprite(){

	return Transform::sprite;
}

int Transform::getLayer(){

	return layer;
}