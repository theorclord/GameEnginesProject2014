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

void FrameHandler::AddSprite(Transform sprite)
{
	// TODO: Arrange according to layer
	list<Transform>::iterator it;
	it = spriteList.end();
	spriteList.insert(it, sprite);
	spriteList.sort([](Transform & a, Transform & b) { return a.getLayer() < b.getLayer(); });
}

void FrameHandler::renderingThread(sf::RenderWindow* window)
{
	// the rendering loop
	while (window->isOpen())
	{
		// draw...
		window->clear();

		for each (Transform sprite in FrameHandler::spriteList)
		{
			//sprite.Update();
			sf::Sprite spr = sprite.getSprite();
			window->draw(spr);
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
	sf::Thread rthread(&FrameHandler::renderingThread, &window);
	rthread.launch();

	while (window.isOpen())
	{
		clock_t begin = clock();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		elapsed_secs = double(clock() - begin) / CLOCKS_PER_SEC;
	}
	/*
	thread wthread(&FrameHandler::windowThread, &window);
	wthread.join();
	*/
}

void FrameHandler::windowThread(sf::RenderWindow* window){
	window->setActive(true);
}

list<Transform> init()
{
	list<Transform> tmp; 
	return tmp;
}

list<Transform> FrameHandler::spriteList(init());

double FrameHandler::elapsed_secs;