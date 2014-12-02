/*
#pragma once
#include "stdafx.h"
#include "Transform.h"

class Collider
{

public:
	virtual void OnEnter();
	virtual void OnStay();
	virtual void OnExit();
	virtual bool DetectCollision(Transform trans, Transform* parent);
};