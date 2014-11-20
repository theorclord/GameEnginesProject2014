// GameEngineProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>
#include "Sprite.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Sprite testSprite("my sprite", "Assets\\sprite.jpg");


	FrameHandler handler;
	handler.CreateFrame(300,300, "hej claus");
	handler.AddSprite(testSprite);

	sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
    sf::CircleShape shape(100.f);
	sf::Texture spriteImg;
	spriteImg.loadFromFile("Assets\\sprite.jpg");
	sf::Sprite sprite(spriteImg);
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
		window.draw(sprite);
        window.display();
    }

    return 0;
}

