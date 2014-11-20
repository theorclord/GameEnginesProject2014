#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>
#include <thread>
#include <functional>

FrameHandler::FrameHandler()
{
}

FrameHandler::~FrameHandler()
{
}

void FrameHandler::AddSprite(Sprite sprite)
{
	list<Sprite>::iterator it;
	it = spriteList.end();
	spriteList.insert(it, sprite);
}

void FrameHandler::renderingThread(sf::RenderWindow* window)
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	shape.setPosition(50, 50);

	// the rendering loop
	while (window->isOpen())
	{
		// draw...
		window->clear();

		for each (Sprite sprite in FrameHandler::spriteList)
		{
			//Logic for drawing Sprites
		}

		// end the current frame
		window->display();
	}
}

void FrameHandler::CreateFrame(int width, int height, std::string title){
	sf::RenderWindow window(sf::VideoMode(width, height), title);

	// deactivate its OpenGL context
	window.setActive(false);

	// launch the rendering thread
	sf::Thread thread(&FrameHandler::renderingThread, &window);
	thread.launch();

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
	}
}

list<Sprite> init()
{
	list<Sprite> tmp; 
	return tmp;
}

list<Sprite> FrameHandler::spriteList(init());