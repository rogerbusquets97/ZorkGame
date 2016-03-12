#ifndef PLAYER_H
#define PLAYER_H
#include "room.h"
#include "exit.h"

class player{
public:
	
	rom curr;
	rom nextroom( rom current, direction dire, exit*exits );

};






#endif