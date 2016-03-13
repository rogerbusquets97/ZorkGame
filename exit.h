#ifndef _EXIT_H_
#define _EXIT_H_

#include "room.h"

enum direction { north, south, east, west };

class Exit{
public:
	bool open;
	direction dir;
	rom source;
	rom dest;

};





#endif