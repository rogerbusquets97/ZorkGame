#ifndef _WORLD_H_
#define WORLD_H

#include "player.h"
#include "exit.h"
#include "room.h"



class World {
public:
	room*rooms;
	Exit*exits;
	player pl;
public:
	void CreateWorld();

	void nextroom(const direction dir);
	void LookRoom();
	bool Play();
	void World::openclose();
	~World();//destructor to delete

	

};
	



//void OpenClose(World(&world), char* action, char* direction);

#endif