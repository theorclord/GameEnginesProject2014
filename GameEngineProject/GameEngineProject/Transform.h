#pragma once

#include "stdafx.h"
#include "Physics.h"
#include <string>
#include <tuple>
#include <SFML/Graphics.hpp>

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();
	//virtual void setSprite(sf::Sprite sprite);
	virtual sf::Sprite getSprite();
	virtual void setSprite(string);
	virtual int getLayer();
	virtual int setLayer(int layer);
	void setPhysics(Physics physics);
	Physics getPhysics();
	virtual bool DetectCollision(Transform transfrom); //True if collided, false if not

	void Update();

private:
	Physics physics;
	sf::Sprite sprite;
	string spritePath;
	int layer;
};