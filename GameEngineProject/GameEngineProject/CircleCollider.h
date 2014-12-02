#include "stdafx.h"
#include "Transform.h"
#include "Collider.h"


class CircleCollider : Collider
{
	private:
		tuple<float,float> center;
		float radius;
		bool stay;
	public:
		bool DetectCollision(Transform trans, Transform parent);
		float getRadius();
		void setRadius(float rad);
		virtual void OnEnter();

};
