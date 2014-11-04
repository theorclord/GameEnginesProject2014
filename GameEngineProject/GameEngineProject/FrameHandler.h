#include <SFML/Graphics.hpp>
using namespace std;

namespace Project{
	class FrameHandler
	{
	public:
		virtual void CreateFrame(int width,int height,string title);
	};
}