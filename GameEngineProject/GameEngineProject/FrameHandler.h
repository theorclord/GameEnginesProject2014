#include <SFML/Graphics.hpp>
#include <list>
#include "Transform.h"
using namespace std;

class FrameHandler
{
public:
	FrameHandler();
	~FrameHandler();
	static void CreateFrame(int width, int height, string title);
	static void AddSprite(Transform);
	static void renderingThread(sf::RenderWindow* window);
	static void windowThread(sf::RenderWindow* window);
	static double elapsed_secs;

private:
	static list<Transform> spriteList;
};