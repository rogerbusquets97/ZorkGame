#ifndef EXIT_H
#define EXIT_H
#include "room.h"

enum direction{north,south,east,west};

class exit{
public:
	bool open;
	char desc[200];
	direction dir;
	room source;
	room dest;
	
};

exit*exits;



#endif