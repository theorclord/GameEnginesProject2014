# include "Transform.h"

Transform::Transform(){
}

void Transform::setSprite(sf::Sprite sprite){

	Transform::sprite = sprite;
}

sf::Sprite Transform::getSprite(){

	return Transform::sprite;
}