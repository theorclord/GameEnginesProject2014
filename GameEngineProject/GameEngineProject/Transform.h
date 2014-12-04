#pragma once

#include "stdafx.h"
#include "Physics.h"
#include <string>
#include <SFML/Graphics.hpp>
#include "CircleCollider.h"

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();
	sf::Sprite* getSprite();
	void setSprite(string);
	int getLayer();
	void setLayer(int layer);
	void setPhysics(Physics physics);
	Physics getPhysics();
	CircleCollider* getCollider();
	void setCollider(CircleCollider* coll);

	virtual bool DetectCollision(Transform transfrom); //True if collided, false if not

	void Update();

private:
	Physics physics;
	sf::Sprite sprite;
	string spritePath;
	int layer;
	sf::Texture tex;
	CircleCollider* coll;
};