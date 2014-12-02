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

		//Convert list to Vector
		int i = 0;
		vector<Transform> v1(FrameHandler::spriteList.size());
		for each(Transform trans in FrameHandler::spriteList){
			v1[i] = trans;
			i++;
		}

		//Draw and update spriteList
		for (i = 0; i < FrameHandler::spriteList.size(); i++){
			for (int j = 0; j < FrameHandler::spriteList.size(); j++){
				if (i != j)
					v1[i].DetectCollision(v1[j]);
			}
			v1[i].Update();
			sf::Sprite spr = *v1[i].getSprite();
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