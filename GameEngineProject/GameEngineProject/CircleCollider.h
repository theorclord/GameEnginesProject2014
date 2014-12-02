#include "stdafx.h"
#include "Transform.h"


class CircleCollider
{
	public:
		virtual void OnEnter();
		virtual void OnStay();
		virtual void OnExit();

	private:
		tuple<float,float> center;
		float radius;
		bool stay;
};
