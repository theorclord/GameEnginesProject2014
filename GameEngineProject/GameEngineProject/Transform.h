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
	virtual void setSpritePath(string);
	virtual void setSprite(sf::Sprite sprite);
	virtual sf::Sprite getSprite();
	virtual int getLayer();
	virtual int setLayer(int layer);
	void setPhysics(Physics physics);
	Physics getPhysics();
	void update();

private:
	Physics physics;
	sf::Sprite sprite;
	string spritePath;
	int layer;
};