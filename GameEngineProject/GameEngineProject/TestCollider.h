#pragma once
#include "stdafx.h"
#include "CircleCollider.h"
#include "Transform.h"


class TestCollider : public CircleCollider{
	private:
		Transform* trans;

	public:
		virtual void OnEnter();
		void setTransform(Transform* trans);
};