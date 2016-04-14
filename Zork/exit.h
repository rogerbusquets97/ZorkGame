#ifndef _EXIT_H_
#define _EXIT_H_

#include "room.h"

enum direction { north, south, east, west };

class Exit:public Entity{
	
public:
	Exit(){};
	~Exit(){};
	bool open;
	direction dir;
	place source;
	place dest;
	
};





#endif