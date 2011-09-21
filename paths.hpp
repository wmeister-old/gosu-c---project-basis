#ifndef PATHS
#define PATHS

#include <string>
#include <Gosu/Directories.hpp>

#define RESOURCE_DIR (Gosu::sharedResourcePrefix() + L"resource/")
#define IMG_DIR (RESOURCE_DIR + L"img/")
#define IMG_FILE(n) (IMG_DIR + n)

#endif