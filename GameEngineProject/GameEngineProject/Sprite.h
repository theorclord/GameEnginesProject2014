#pragma once

#include "stdafx.h"
#include <string>
#include <tuple>
#include <SFML/Graphics.hpp>

using namespace std;

class Sprite
{
	public:
		Sprite();
		~Sprite();
		Sprite(string title);
		Sprite(string title, string filePath);
		virtual void setPosition(int x, int y);
		virtual tuple<int,int> getPosition();
		void setImage(string filePath);
		sf::Texture getImage();

	private:
		string title;
		sf::Texture Image;
		tuple<int,int> position;
};