#pragma once

#include "stdafx.h"
#include "Physics.h"
#include <string>
#include <tuple>
#include <SFML/Graphics.hpp>
#include "Collider.h"

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();
	sf::Sprite getSprite();
	void setSprite(string);
	int getLayer();
	void setLayer(int layer);
	void setPhysics(Physics physics);
	Physics getPhysics();
	Collider getCollider();
	void setCollider();

	virtual bool DetectCollision(Transform transfrom); //True if collided, false if not

	void Update();

private:
	Physics physics;
	sf::Sprite sprite;
	string spritePath;
	int layer;
	Collider collider;
};