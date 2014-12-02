// GameEngineProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "FrameHandler.h"
#include <SFML/Graphics.hpp>
#include "Sprite.h"
#include <thread>

int _tmain(int argc, _TCHAR* argv[])
{
	/*
	sf::Texture spriteImg;
	spriteImg.loadFromFile("Assets\\sprite.jpg");
	sf::Sprite testSprite(spriteImg);
	*/
	Transform trans1; 
	trans1.setSprite("Assets\\sprite.jpg");
	Transform trans2;

	FrameHandler handler;
	handler.CreateFrame(300, 300, "hej claus");
	handler.AddSprite(trans1);
	handler.CreateFrame(300, 300, "hej mikkel");

	/*
	handler.AddSprite(trans1);
	thread wthread(handler.CreateFrame, 300, 300, "hej claus");
	wthread.join();
	*/

	
	/*
	sf::RenderWindow window(sf::VideoMode(400, 400), "SFML works!");
	sf::Texture spriteImg;
	spriteImg.loadFromFile("Assets\\sprite.jpg"); 
	sf::Sprite sprite(spriteImg); 
    //shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
		
        window.clear();
        //window.draw(shape);
		window.draw(sprite);
        window.display();
    }
	*/
	

    return 0;
}

