#ifndef IMAGE
#define IMAGE

#include <string>
#include <Gosu/Image.hpp>
#include "paths.hpp"

#define SET_IMG(img, path) \
	  std::wstring imageFileName (IMG_FILE(path)); \
	  img.reset(new Gosu::Image(graphics, imageFileName, true));

#endif