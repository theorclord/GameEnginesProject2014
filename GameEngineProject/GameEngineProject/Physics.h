#pragma once

#include "stdafx.h"
#include <string>
#include <tuple>

using namespace std;

class Physics
{
	public:
		Physics();
		~Physics();
		virtual void setVelocity(tuple<float,float> velocity);
		virtual void addForce(tuple<float, float> force);

	private:
		tuple<float,float> velocity;
		tuple<float,float> forceSum;
};