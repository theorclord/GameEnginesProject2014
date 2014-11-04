#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>

namespace Project{
	void FrameHandler::CreateFrame(int width,int height,string title){
		sf::RenderWindow window(sf::VideoMode(width, height), title);

		
		sf::CircleShape shape(100.f);
		shape.setFillColor(sf::Color::Green);
		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
					window.close();
			}
		
			window.clear();
			window.draw(shape);
			window.display();
		}
		
		
	}

}
