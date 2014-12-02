#pragma once
#include "stdafx.h"
#include <tuple>

class CircleCollider
{
	private:
		//tuple<float,float> center;
		float radius;
		bool stay;
	public:
		bool DetectCollision(CircleCollider coll, float dist);
		float getRadius();
		void setRadius(float rad);
		void OnEnter();
};
