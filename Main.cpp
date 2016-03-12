#include <stdio.h>
#include "other.h"
#include "room.h"
#include "world.h"
#include "exit.h"
#include "player.h"


int main(){

	printf("Welcome to Zork\n You're in a middle of a wide forest near your time machine, something went wrong and you have appeared in an unknown land and the time machine seems to be broken.\n Try to look for the pieces you need to fix the time machine, but be careful you don't known which kind of dangers could you find. \n");
	printf("Comands\n Go north(to move to the north)\n Go south(to move to the south)\n Go east(to move to the east)\n Go west( to move to the west)\n Look(to have again the description of the room)\n Help(to see againg the comands)\n quit(to quit the game)");
	world map;
	room rooms[9];
	exit exits[17];
	map.createworld(rooms, exits);
	play(map,exits,rooms);
	
	delete rooms;
	delete exits;

	getchar();

	
}