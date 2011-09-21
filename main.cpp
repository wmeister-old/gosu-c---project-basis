#include <iostream>
#include <Gosu/Window.hpp>
#include <Gosu/Directories.hpp>
#include <Gosu/AutoLink.hpp>
#include "character.hpp"

using namespace std;

class GameWindow : public Gosu::Window {
	public:
		GameWindow() : Window(640, 480, false, 20) {
			setCaption(L"Hello World!");
/*			player::init(graphics());
			player::pos.x = player::pos.y = 0;
			player::pos.z = 1;*/
        }
		void upate() {

		}
		void draw() {
			//player::draw();
		}
};

int main() {
	//cout << "x=" << player::pos.x <<  " y=" << player::pos.y << "  health=" << player::health << " visible=" << player::visible << endl;
    GameWindow window;
    window.show();
}