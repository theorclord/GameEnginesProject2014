#pragma once

#include "stdafx.h"
#include <tuple>

using namespace std;

class Physics
{
	public:
		Physics();
		~Physics();
		virtual void setVelocity(tuple<float,float> velocity);
		virtual tuple<float,float> getVelocity();
		virtual void addAcceleration(tuple<float, float> acc);
		virtual void Update();
		
	private:
		tuple<float,float> velocity;
		tuple<float,float> forceSum;
};