#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "room.h"


class player:public Entity{
public:
	
	player(){};
	virtual~player(){};
	place curr;
	Vector<Item>inventory;
	
	
};






#endif