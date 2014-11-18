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
		virtual void setVelocity(tuple<int,int> velocity);

	private:
		tuple<int,int> velocity;
		tuple<int,int> forceSum;
};