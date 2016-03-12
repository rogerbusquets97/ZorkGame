#include <string.h>
#include <stdio.h>
#include"world.h"
#include "exit.h"
#include "player.h"


void play(world w,exit*exits, room*rooms){
	player pl;
	char action[30];
	bool quit =false;
	direction direc;
	pl.curr = woods;
	
	
	printf("%s\n", rooms[pl.curr].name);
	printf("%s\n", rooms[pl.curr].desc);

	do{
		printf("Next action?\n");
		fgets(action, 30, stdin);
		if (action == "Go north"){
			direc = north;
			pl.curr = pl.nextroom(pl.curr, direc,exits);
			printf("%s\n", rooms[pl.curr].name);
			printf("%s\n", rooms[pl.curr].desc);
		}
		else if (action == "Go south"){
			direc = south;
			pl.curr = pl.nextroom(pl.curr, direc, exits);
			printf("%s\n", rooms[pl.curr].name);
			printf("%s\n", rooms[pl.curr].desc);
		}
		else if (action == "Go west"){
			direc = west;
			pl.curr = pl.nextroom(pl.curr, direc, exits);
			printf("%s\n", rooms[pl.curr].name);
			printf("%s\n", rooms[pl.curr].desc);
		}
		else if (action == "Go east"){
			direc = east;
			pl.curr = pl.nextroom(pl.curr, direc, exits);
			printf("%s\n", rooms[pl.curr].name);
			printf("%s\n", rooms[pl.curr].desc);
		}
	} while (!quit);

}