#include <stdio.h>
#include "world.h"
#include"string.h"



void World::CreateWorld(){
	//rooms
	rooms = new room[9];
	exits = new Exit[18];
	
	//rooms name
	rooms[woods].StoreRoom("Woods", "You're in the woods surrounded by tall trees, you have to find a way to get out of here!\n");
	rooms[knightsroom].StoreRoom("Knights room", "You're in the knights room, be careful you may find knights round here, try to not be seen till you get some weapon so you'll be able to fight them\n");
	rooms[kitchen].StoreRoom("Kitchen", "You're in the kitchen, time to take something to eat if you want or even some pointed object\n");
	rooms[throne].StoreRoom("Throne room", "You're in the throne room! Try to not be seen for the king or he'll nail your head on a sink!\n");
	rooms[smithy].StoreRoom("Smithy", "You're in the smithy, the blacksmith seems to be a nice person you can ask him to improve your weapon\n");
	rooms[stables].StoreRoom("Stables", "You're in the stables it seems there's something hidden in the thatch\n");
	rooms[barracks].StoreRoom("Barracks", "You're in the barracks, someone is training you can learn useful things here\n");
	rooms[princess].StoreRoom("Princess's room", "You're in the pricess's room, she's naked in the bed, but she seem to be happy to have a visit ;)\n");
	rooms[castle].StoreRoom("Castle entrance", "You're inside enormous castle, maybe you'll find here what you need to go back to the future\n");
	
	
	//rooms desc


	
	//exits
	
	//exits data
	//exit 0 and 1 to go in an outside the castle
	

	exits[0].dir = north;
	exits[0].open = true;
	exits[0].source = woods;
	exits[0].dest = castle;
	

	
	exits[1].dir = south;
	exits[1].open = false;
	exits[1].source = castle;
	exits[1].dest = woods;
	//exit2 and 3 to go from castle to random room

	
	exits[2].dir = east;
	exits[2].open = true;
	exits[2].source = castle;
	exits[2].dest = knightsroom;

	
	exits[3].dir = west;
	exits[3].open = true;
	exits[3].source = knightsroom;
	exits[3].dest = castle;

	//exit4 and 5 to go from castle to kitchen

	
	exits[4].open = true;
	exits[4].dir = north;
	exits[4].source = castle;
	exits[4].dest = kitchen;

	
	exits[5].dir = south;
	exits[5].open = true;
	exits[5].source = kitchen;
	exits[5].dest = castle;

	//exit6 and 7 to go from kitchen to knight's room
	
	exits[6].dir = east;
	exits[6].open = true;
	exits[6].source = kitchen;
	exits[6].dest = knightsroom;

	
	exits[7].dir = west;
	exits[7].open = true;
	exits[7].source = knightsroom;
	exits[7].dest = kitchen;

	//exit8 and 9 to go from knights room to throne room

	
	exits[8].dir = north;
	exits[8].open = true;
	exits[8].source = knightsroom;
	exits[8].dest = throne;

	
	exits[9].dir = south;
	exits[9].open = true;
	exits[9].source = throne;
	exits[9].dest = knightsroom;

	//exit10 and 11 to go from throne room to princess room

	
	exits[10].dir = north;
	exits[10].open = true;
	exits[10].source = throne;
	exits[10].dest = princess;

	
	exits[11].dir = south;
	exits[11].open = true;
	exits[11].source = princess;
	exits[11].dest = throne;

	// exit 12 and 13 to go from throne room to barracks
	
	exits[12].dir = west;
	exits[12].open = true;
	exits[12].source = throne;
	exits[12].dest = barracks;

	
	exits[13].dir = east;
	exits[13].open = true;
	exits[13].source = barracks;
	exits[13].dest = throne;

	//exit 14 and 15 to go from barracks to smithy

	
	exits[14].dir = north;
	exits[14].open = true;
	exits[14].source = barracks;
	exits[14].dest = smithy;

	
	exits[15].dir = south;
	exits[15].open = true;
	exits[15].source = smithy;
	exits[15].dest = barracks;

	//exit 16 and 17 to go from smithy to stables

	
	exits[16].dir = east;
	exits[16].open = true;
	exits[16].source = smithy;
	exits[16].dest = stables;

	
	exits[17].dir = west;
	exits[17].open = true;
	exits[17].source = stables;
	exits[17].dest = smithy;	
}

void World::LookRoom() {
	printf("  -> %s\n\n %s", rooms[pl.curr].name, rooms[pl.curr].desc);
}
void World::nextroom(const direction dir){
	
		bool success = 0;

		for (int i = 0; i < 18; i++) {
			if ((pl.curr == exits[i].source) && (exits[i].dir == dir)) {
				success = 1;
				if (!exits[i].open){
					printf("\nThat door is closed, try to open it.\n");
				}
				else {
					pl.curr = exits[i].dest;
					LookRoom();
					break;
				}
			}
		}

		if (!success)
			printf("\nThere's nothing on that direction\n");
	}
bool World::Play(){
	char action[20];
	printf("\n\n--> ");
	fgets(action, 20, stdin);
	if ((strcmp(action, "quit\n") == 0) || strcmp(action, "q\n") == 0)
		return false;
	else {
		if (!strcmp(action, "north\n") || !strcmp(action, "n\n") || !strcmp(action, "go north\n")) {
			nextroom(north);
			
		}
		else if (!strcmp(action, "south\n") || !strcmp(action, "s\n") || !strcmp(action, "go south\n")) {
			nextroom(south);
		
		}
		else if (!strcmp(action, "west\n") || !strcmp(action, "w\n") || !strcmp(action, "go west\n")) {
			nextroom(west);
	
		}
		else if (!strcmp(action, "east\n") || !strcmp(action, "e\n") || !strcmp(action, "go east\n")) {
			nextroom(east);
			
		}
		else if (!strcmp(action, "open door\n")) {
			openclose();
		}
		else if (!strcmp(action, "close door\n")) {
				openclose();
			}
		else if(!strcmp(action, "help\n") || !strcmp(action, "h\n")) {
			printf("Comands\n Go north(to move to the north)\n Go south(to move to the south)\n Go east(to move to the east)\n Go west( to move to the west)\n Look(to have again the description of the room)\n Help(to see againg the comands)\n quit(to quit the game)\n");
		}
		else if (!strcmp(action, "look\n") || !strcmp(action, "l\n")){
			LookRoom();
		}


		return true;
	}
}


void World::openclose(){
	for (int i = 0; i < 18; i++){
		if ((exits[i].source == pl.curr) && (exits[i].open == true)){
			exits[i].open = false;
			printf("Now the door is closed\n");
			break;
		}
		else if ((exits[i].source == pl.curr) && (exits[i].open == false)){
			exits[i].open = true;
			printf("You have opened the door, now you can go that direction\n");
			break;
		}

	}
}

