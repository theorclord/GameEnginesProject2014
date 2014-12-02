# include "Physics.h"

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
	std::get<0>(Physics::acceleration) = std::get<0>(Physics::acceleration) + std::get<0>(acc);
	std::get<1>(Physics::acceleration) = std::get<1>(Physics::acceleration) + std::get<1>(acc);
}

void Physics::Update()
{
	std::get<0>(Physics::velocity) = std::get<0>(Physics::velocity) + std::get<0>(Physics::acceleration);
	std::get<1>(Physics::velocity) = std::get<1>(Physics::velocity) + std::get<1>(Physics::acceleration);
}

tuple<float,float> Physics::getVelocity()
{
	return velocity;
}