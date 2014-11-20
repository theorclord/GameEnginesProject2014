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
	static void AddSprite(Sprite);
	static void renderingThread(sf::RenderWindow* window);

private:
	static list<Sprite> spriteList;
};