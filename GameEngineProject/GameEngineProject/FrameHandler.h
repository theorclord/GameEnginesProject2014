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
	void Resize(int width, int height);
	void Update(void);
	virtual void AddSprite(Sprite);

protected:
	sf::RenderWindow window;

private:
	list<Sprite> spriteList;
};