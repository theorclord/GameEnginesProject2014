#pragma once
#include "stdafx.h"
#include <tuple>
//#include "Transform.h"


class CircleCollider
{
	private:
		std::tuple<float,float> center;
		float radius;
		bool stay;
	public:
		bool DetectCollision(CircleCollider* coll, float dist);
		float getRadius();
		void setRadius(float rad);
		std::tuple<float, float> getCenter();
		void setCenter(std::tuple<float,float> center);
		virtual void OnEnter();
		
};