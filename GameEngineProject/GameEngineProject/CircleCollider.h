#pragma once
#include "stdafx.h"
#include <tuple>
//#include "Transform.h"


class CircleCollider
{
	private:
		float radius;
	public:
		bool DetectCollision(CircleCollider* coll, float dist);
		float getRadius();
		void setRadius(float rad);
		virtual void OnEnter();
		
};