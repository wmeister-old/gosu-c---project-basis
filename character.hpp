#ifndef CHARACTER
#define CHARACTER

#include <Gosu/Image.hpp>
#include "position.hpp"

class Character {
	public:
		position pos;
		std::auto_ptr<Gosu::Image> image;
		int health;
		bool visible;

		Character(Gosu::Graphics& graphics);
		~Character();
		void draw();
};

#endif