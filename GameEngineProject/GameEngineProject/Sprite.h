#pragma once

#include "stdafx.h"
#include <string>
#include <tuple>

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

	private:
		string title;
		string filePath;
		tuple<int,int> position;
};