#include "stdafx.h"
#include "CircleCollider.h"

float CircleCollider::getRadius(){
	return CircleCollider::radius;
}

void CircleCollider::setRadius(float rad){
	CircleCollider::radius = rad;
}

bool CircleCollider::DetectCollision(CircleCollider coll, float dist){
	if (dynamic_cast<CircleCollider&> (coll).getRadius() + CircleCollider::radius <= dist){

		CircleCollider::OnEnter();
		return true;
	}
	return false;
}

void CircleCollider::OnEnter(){

}

/*
bool CircleCollider::DetectCollision(Transform trans, Transform* parent){
	
	float dist = std::sqrtf(std::powf(trans.getSprite().getPosition().x - parent->getSprite().getPosition().x, 2) +
		std::powf(trans.getSprite().getPosition().y - parent->getSprite().getPosition().y, 2));
	if (typeid(trans.getCollider())==typeid(CircleCollider)){
		CircleCollider coll = trans.getCollider();
		if (dynamic_cast<CircleCollider&> (coll).getRadius() + CircleCollider::radius <= dist){
			CircleCollider::OnEnter();
		}
	};
	return false;
}
*/