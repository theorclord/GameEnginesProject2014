#include "stdafx.h"
#include "TestCollider.h"
#include <iostream>

void TestCollider::OnEnter(){
	//trans->getSprite()->setPosition(200.0f, 200.0f);
	std::cout << "This is overridden function" +trans->getLayer();
}

void TestCollider::setTransform(Transform* trams){
	TestCollider::trans = trans;
}