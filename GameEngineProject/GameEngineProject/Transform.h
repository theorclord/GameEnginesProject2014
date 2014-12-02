#include <string>
#include <tuple>
#include <SFML/Graphics.hpp>

using namespace std;

class Transform
{
public:
	Transform();
	~Transform();
	virtual void setSprite(sf::Sprite sprite);
	virtual sf::Sprite getSprite();
	virtual int getLayer();

private:
	sf::Sprite sprite;
	int layer;
};