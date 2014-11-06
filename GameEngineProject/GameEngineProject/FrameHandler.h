#include <SFML/Graphics.hpp>
#include <list>
#include "Sprite.h"
using namespace std;

class FrameHandler
{
public:
	FrameHandler();
	~FrameHandler();
	virtual void CreateFrame(int width,int height,string title);
	virtual void AddSprite(Sprite);

private:
	list<Sprite> spriteList;
};