#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;
namespace Project{
	class FrameHandler
	{
	public:
		void CreateFrame(int width,int height,string title);
		void Resize(int width, int height);
		void Update(void);
		Sprite Draw(string);

	protected:
		RenderWindow window;
	};
}