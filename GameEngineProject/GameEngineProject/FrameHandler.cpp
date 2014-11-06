#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>
namespace Project{
	void FrameHandler::CreateFrame(int width,int height,string title){
		window.create(sf::VideoMode(width, height), title);
	}

	void FrameHandler::Resize(int width, int height) {
		// Following is an experiment for keeping the position relative to the center of the window 
		// rather than the x,y of upper-left corner
		if (window.getSize().x < width)
			window.setPosition(Vector2i(window.getPosition().x - (window.getSize().x / 2), window.getPosition().y));
		if (window.getSize().x > width)
			window.setPosition(Vector2i(window.getPosition().x + (width / 2), window.getPosition().y));

		window.setSize(Vector2u(width, height));
	}

	void FrameHandler::Update(void)
	{
		while (window.isOpen())
		{
			Event event;
			while (window.pollEvent(event))
			{
				// Added more types of events..
				if (event.type == Event::Closed)
					window.close();
				if (event.type == Event::MouseButtonPressed)
					Resize(500, 500);
				if (event.type == Event::KeyPressed)
					Resize(200, 200);
			}

			window.clear();
			window.draw(Draw());
			window.display();
		}
	}

	Sprite FrameHandler::Draw(string path) 
	{
	}
}
