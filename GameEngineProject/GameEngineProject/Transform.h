#pragma once

#include "stdafx.h"
#include <string>
#include <tuple>
#include <SFML/Graphics.hpp>

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();
	virtual void setSprite(sf::Sprite sprite);
	virtual sf::Sprite getSprite();
	virtual void setSpritePath(string);
	virtual int getLayer();
	virtual int setLayer(int layer);

private:
	sf::Sprite sprite;
	string spritePath;
	int layer;
};