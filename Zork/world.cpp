#include <stdio.h>
#include "world.h"




void World::CreateWorld(){

	rooms = new room[9];
	exits = new Exit[18];


	//Items
	Item torch("Torch", "You can use it during night to see, otherwise you won't be able to look around you\n");
	Item sword("Sword", "An ancient sword, seems to be able to cut someone's head, could be nice to try it\n");
	Item armor("Armor", "A heavy armor that will protect you from enemies\n");
	Item time_machine("Time machine", "The time machine, it's broken try to fix it to go back to the future\n");
	Item TM_pieces("Time machine pieces", "The pieces that are necessary for fixing the time machine\n");
	Item food("Food", "Food will increase your HP a bit\n");
	Item healing_potion("Healing potion", "The healing potion fully heals you\n");
	Item key("Key", "It is a key with the royal symbol, seems that it can open any door\n");
	
	
	
	
	
	
	//rooms
	/*rooms.push_back( new room ("Woods", "You're in the woods surrounded by tall trees, you have to find a way to get out of here!\n",ROOM));
	rooms.push_back(new room("Knights room", "You're in the knights room, be careful you may find knights round here, try to not be seen till you get some weapon so you'll be able to fight them\n", ROOM));
	rooms.push_back(new room("Kitchen", "You're in the kitchen, time to take something to eat if you want or even some pointed object\n", ROOM));
	rooms.push_back(new room("Throne room", "You're in the throne room! Try to not be seen for the king or he'll nail your head on a sink!\n", ROOM));
	rooms.push_back(new room("Smithy", "You're in the smithy, the blacksmith seems to be a nice person you can ask him to improve your weapon\n", ROOM));
	rooms.push_back(new room("Stables", "You're in the stables it seems there's something hidden in the thatch\n", ROOM));
	rooms.push_back(new room("Barracks", "You're in the barracks, someone is training you can learn useful things here\n", ROOM));
	rooms.push_back(new room("Princess's room", "You're in the pricess's room, she's naked in the bed, but she seem to be happy to have a visit ;)\n", ROOM));
	rooms.push_back(new room("Castle entrance", "You're inside an enormous castle, maybe you'll find here what you need to go back to the future\n", ROOM));*/
	
	
	//rooms name
	
	rooms[0].name = "Woods"; 
	rooms[0].desc = "You're in the woods surrounded by tall trees, you have to find a way to get out of here!\n";
	rooms[0].objects.push_back(torch);
	rooms[0].objects.push_back(time_machine);

	rooms[1].name = "Knights room";
	rooms[1].desc = "You're in the knights room, be careful you may find knights round here, try to not be seen till you get some weapon so you'll be able to fight them\n";
	rooms[1].objects.push_back(sword);


	rooms[2].name = "Kitchen"; 
	rooms[2].desc = "You're in the kitchen, time to take something to eat if you want or even some pointed object\n";
	rooms[2].objects.push_back(food);

	rooms[3].name = "Throne room";
	rooms[3].desc = "You're in the throne room! Try to not be seen for the king or he'll nail your head on a sink!\n";
	rooms[3].objects.push_back(key);

	rooms[4].name = "Smithy";
	rooms[4].desc = "You're in the smithy, the blacksmith seems to be a nice person you can ask him to improve your weapon\n";
	rooms[4].objects.push_back(armor);

	rooms[5].name = "Stables";
	rooms[5].desc = "You're in the stables it seems there's something hidden in the thatch\n";
	rooms[5].objects.push_back(TM_pieces);

	rooms[6].name = "Barracks";
	rooms[6].desc = "You're in the barracks, someone is training you can learn useful things here\n";
	

	rooms[7].name = "Princess's room";
	rooms[7].desc = "You're in the pricess's room, she's naked in the bed, but she seem to be happy to have a visit ;)\n";
	rooms[7].objects.push_back(healing_potion);

	rooms[8].name = "Castle entrance";
	rooms[8].desc = "You're inside an enormous castle, maybe you'll find here what you need to go back to the future\n";
	


	
	

	



	
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

	//player

	pl.curr = woods;
}

const void World::LookRoom() {
	
	printf("  -> \n");
	rooms[pl.curr].name.print();
	rooms[pl.curr].desc.print();
	rooms[pl.curr].LookItems();
}
const void World::nextroom(direction dir){

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
 World::~World(){
	
	delete[] exits;
	
 
 }

