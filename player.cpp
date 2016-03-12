#include <stdio.h>
#include <string.h>
#include "room.h"
#include "world.h"
#include "exit.h"
#include "player.h"

rom player::nextroom( rom current,  direction dire,exit *exits){
	for (int i = 0; i < 17; i++){
		if (exits[i].dir == dire){
			if (exits[i].source == current){
				if (exits[i].open == true){
					return exits[i].dest;
					break;
				}
				else
					printf("The door is locked\n");
				
		}
		}


	}
}