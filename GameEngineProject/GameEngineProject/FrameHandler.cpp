#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>


FrameHandler::FrameHandler()
{
}

FrameHandler::~FrameHandler()
{
}

void FrameHandler::AddSprite(Sprite sprite)
{
	FrameHandler::spriteList.assign(1,sprite);
}

void FrameHandler::CreateFrame(int width, int height, string title){
	window.create(sf::VideoMode(width, height), title, sf::Style::Close);
	Update();
}

void FrameHandler::Resize(int width, int height) {
	window.setSize(sf::Vector2u(width, height));
}

void FrameHandler::Update(void)
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(50, 50);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			// Added resize testing events..
			if (event.type == sf::Event::Closed)
				window.close();
			if (event.type == sf::Event::MouseButtonPressed)
				Resize(500, 500);
			if (event.type == sf::Event::KeyPressed)
				Resize(200, 200);
		}

		window.clear();
		window.draw(shape);
		window.display();
	}
}