#ifndef PLAYER_H
#define PLAYER_H
#include "room.h"
#include "exit.h"

class player{
public:
	
	rom currentroom;
	rom nextroom(const rom current, const direction dire );

};
player pl;





#endif