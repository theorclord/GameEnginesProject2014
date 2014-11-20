#include "stdafx.h"
#include "Sprite.h"


Sprite::Sprite()
{
}
Sprite::~Sprite()
{
}

Sprite::Sprite(string title)
{
	Sprite::title = title;
}

Sprite::Sprite(string title, string filePath)
{
	Sprite::title = title;
	setImage(filePath);
}

void Sprite::setPosition(int x, int y){
	position = tuple<int,int>(x,y);
}

tuple<int,int> Sprite::getPosition(){
	return position;
}

void Sprite::setImage(string filePath){
	Image.loadFromFile(filePath);
}

sf::Texture Sprite::getImage(){
	return Image;
}
