#ifndef _WORLD_H_
#define WORLD_H

#include "player.h"
#include "exit.h"
#include "room.h"



class World {
private:
	room*rooms;
	Exit*exits;
	player pl;
	
public:
	World(){};
	void CreateWorld();

	const void nextroom( direction dir);
	const void LookRoom();
	bool Play();
	void World::openclose();
	virtual~World();//destructor to delete

	

};
	



//void OpenClose(World(&world), char* action, char* direction);

#endif