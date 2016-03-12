#include <stdio.h>
#include <string.h>
#include "room.h"
#include "world.h"
#include "exit.h"

void world::createworld(room rooms[9], exit exits[17]){
	//rooms
	
	rooms = new room[9];
	//rooms name
	
	strcpy_s(rooms[0].name, "Woods");
	strcpy_s(rooms[1].name, "Knights room");
	strcpy_s(rooms[2].name, "Kitchen");
	strcpy_s(rooms[3].name, "Throne room");
	strcpy_s(rooms[4].name, "Smithy");
	strcpy_s(rooms[5].name, "Stables");
	strcpy_s(rooms[6].name, "Barracks");
	strcpy_s(rooms[7].name, "Princess's room");
	strcpy_s(rooms[8].name, "Catsle");

	//rooms desc
	strcpy_s(rooms[0].desc, "You're in the woods surrounded by tall trees, you have to find a way to get out of here!");
	strcpy_s(rooms[1].desc, "You're in the knights room, be careful you may find knights round here, try to not be seen till you get some weapon so you'll be able to fight them");
	strcpy_s(rooms[2].desc, "You're in the kitchen, time to take something to eat if you want or even some pointed object");
	strcpy_s(rooms[3].desc, "You're in the throne room! Try to not be seen for the king or he'll nail your head on a sink!");
	strcpy_s(rooms[4].desc, "You're in the smithy, the blacksmith seems to be a nice person you can ask him to improve your weapon");
	strcpy_s(rooms[5].desc, "You're in the stables it seems there's something hidden in the thatch");
	strcpy_s(rooms[6].desc, "You're in the barracks, someone is training you can learn useful things here");
	strcpy_s(rooms[7].desc, "You're in the pricess's room, she's naked in the bed, but she seem happy to have a visit ;)");
	strcpy_s(rooms[8].desc, "You're in front of an enormous castle, maybe you'll find here what you need to go back to the future");
	
	//exits
	
	exits = new exit[17];
	//exits data
	//exit 0 and 1 to go in an outside the castle
	
	strcpy_s(exits[0].desc, "There's a big gate to go inside the castle");
	exits[0].dir = north;
	exits[0].open = true;
	exits[0].source = woods;
	exits[0].dest = castle;
	

	strcpy_s(exits[1].desc, "There's a big gate to go outside the castle");
	exits[1].dir = south;
	exits[1].open = false;
	exits[1].source = castle;
	exits[1].dest = woods;
	//exit2 and 3 to go from castle to random room

	strcpy_s(exits[2].desc, "There's a small door but seems to be locked");
	exits[2].dir = east;
	exits[2].open = false;
	exits[2].source = castle;
	exits[2].dest = knightsroom;

	strcpy_s(exits[3].desc, "There's a small door but seems to be locked");
	exits[3].dir = west;
	exits[3].open = false;
	exits[3].source = knightsroom;
	exits[3].dest = castle;

	//exit4 and 5 to go from castle to kitchen

	strcpy_s(exits[4].desc, "There's a door, a confortable smell comes from the other side");
	exits[4].open = true;
	exits[4].dir = north;
	exits[4].source = castle;
	exits[4].dest = kitchen;

	strcpy_s(exits[5].desc, "There's a door, you can smell the smell of the woods");
	exits[5].dir = south;
	exits[5].open = true;
	exits[5].source = kitchen;
	exits[5].dest = castle;

	//exit6 and 7 to go from kitchen to knight's room
	strcpy_s(exits[6].desc, "There's a path that goes to the east");
	exits[6].dir = east;
	exits[6].open = true;
	exits[6].source = kitchen;
	exits[6].dest = knightsroom;

	strcpy_s(exits[7].desc, "There's a path that goes to the west");
	exits[7].dir = west;
	exits[7].open = true;
	exits[7].source = knightsroom;
	exits[7].dest = kitchen;

	//exit8 and 9 to go from knights room to throne room

	strcpy_s(exits[8].desc, "There's a path that goes to a huge and shiny room");
	exits[8].dir = north;
	exits[8].open = true;
	exits[8].source = knightsroom;
	exits[8].dest = throne;

	strcpy_s(exits[9].desc, "There's a path that goes to the south");
	exits[9].dir = south;
	exits[9].open = true;
	exits[9].source = throne;
	exits[9].dest = knightsroom;

	//exit10 and 11 to go from throne room to princess room

	strcpy_s(exits[10].desc, "There's a door that seems to go to a room that belong to an important person");
	exits[10].dir = north;
	exits[10].open = true;
	exits[10].source = throne;
	exits[10].dest = princess;

	strcpy_s(exits[11].desc, "There's a door that goes back to the throne room");
	exits[11].dir = south;
	exits[11].open = true;
	exits[11].source = princess;
	exits[11].dest = throne;

	// exit 12 and 13 to go from throne room to barracks
	
	strcpy_s(exits[12].desc, "There's a path to the west, it seems someone is training there");
	exits[12].dir = west;
	exits[12].open = true;
	exits[12].source = throne;
	exits[12].dest = barracks;

	strcpy_s(exits[13].desc, "There's a path that goes back to the throne room ");
	exits[13].dir = east;
	exits[13].open = true;
	exits[13].source = barracks;
	exits[13].dest = throne;

	//exit 14 and 15 to go from barracks to smithy

	strcpy_s(exits[14].desc, "There's a door, on the other side there's someone working");
	exits[14].dir = north;
	exits[14].open = true;
	exits[14].source = barracks;
	exits[14].dest = smithy;

	strcpy_s(exits[15].desc, "There's a door that goes back to the barraacks");
	exits[15].dir = south;
	exits[15].open = true;
	exits[15].source = smithy;
	exits[15].dest = barracks;

	//exit 16 and 17 to go from smithy to stables

	strcpy_s(exits[16].desc, "There's a door you can hear horses on the other side");
	exits[16].dir = east;
	exits[16].open = true;
	exits[16].source = smithy;
	exits[16].dest = stables;

	strcpy_s(exits[17].desc, "There's a door, on the other side there's someone working");
	exits[17].dir = west;
	exits[17].open = true;
	exits[17].source = stables;
	exits[17].dest = smithy;	
}


	


