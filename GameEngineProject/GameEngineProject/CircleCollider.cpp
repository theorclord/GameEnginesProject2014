#include "stdafx.h"
#include "CircleCollider.h"
#include <iostream>

float CircleCollider::getRadius(){
	return CircleCollider::radius;
}

void CircleCollider::setRadius(float rad){
	CircleCollider::radius = rad;
}

bool CircleCollider::DetectCollision(CircleCollider coll, float dist){
	if (dynamic_cast<CircleCollider&> (coll).getRadius() + CircleCollider::radius >= dist){
		return true;
	}
	return false;
}

void CircleCollider::OnEnter(){
	std::cout << "This is main function";
}