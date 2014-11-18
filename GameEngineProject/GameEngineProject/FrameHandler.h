#include <SFML/Graphics.hpp>
#include <list>
#include "Sprite.h"
using namespace std;

class FrameHandler
{
public:
	FrameHandler();
	~FrameHandler();
	static void CreateFrame(int width, int height, string title);
	virtual void AddSprite(Sprite);
	static void renderingThread(sf::RenderWindow* window);

private:
	list<Sprite> spriteList;
};