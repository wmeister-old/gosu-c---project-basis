#include <string>
#include <vector>
#include <Gosu/Image.hpp>
#include "image.hpp"
#include "character.hpp"
	
Character::Character(Gosu::Graphics& graphics) { 
		health = 100;
	    visible = false;

}	
void Character::draw() {
	image->draw(pos.x, pos.y, pos.z);
}

