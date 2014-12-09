

#include "stdafx.h"
#include "FrameHandler.h"
#include <thread>
#include <iostream>
#include "TestCollider.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Transform trans1;
	TestCollider cc;
	cc.setRadius(150);
	cc.setTransform(&trans1);
	trans1.setSprite("Assets\\sprite.jpg");
	trans1.getSprite()->setPosition(100, 100);
	trans1.setPhysics(Physics());
	trans1.getPhysics().setVelocity(std::tuple<float, float>(1.0f, 1.0f));
	trans1.setCollider(&cc);
	trans1.setLayer(0);

	Transform trans2;
	//CircleCollider c2;
	TestCollider c2;
	c2.setRadius(150);
	trans2.setSprite("Assets\\sprite.jpg");
	trans2.getSprite()->setPosition(200, 100);
	trans2.setPhysics(Physics());
	trans2.setCollider(&c2);
	trans2.setLayer(0);

	FrameHandler handler;
	handler.AddSprite(trans1);
	handler.CreateFrame(1000, 900, "hej claus");
	handler.AddSprite(trans2);
	handler.CreateFrame(1000, 900, "hej mikkel");
	
	/*
	sf::RenderWindow window(sf::VideoMode(1000, 400), "SFML works!");
	sf::Texture spriteImg;
	spriteImg.loadFromFile("Assets\\sprite.jpg"); 
	sf::Sprite sprite(spriteImg); 
	sprite.setPosition(500, 100);
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

