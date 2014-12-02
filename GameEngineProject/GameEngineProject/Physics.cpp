#include "stdafx.h"
#include "Physics.h"

Physics::Physics()
{
}

Physics::~Physics()
{
}

void Physics::setVelocity(tuple<float,float> velocity){
	Physics::velocity = velocity;
}

void Physics::addAcceleration(tuple<float,float> acc)
{
	//TODO
}

void Physics::Update()
{
	//TODO
}

tuple<float,float> Physics::getVelocity()
{
	return velocity;
}