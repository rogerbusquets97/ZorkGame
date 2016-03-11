#include <stdio.h>
#include <string.h>
#include "room.h"
#include "world.h"
#include "exit.h"
#include "player.h"

rom nextroom(const rom current, const direction dire){
	for (int i = 0; i < 17; i++){
		if (exits[i].dir == dire){
			if (exits[i].source == current){
				return exits[i].dest;
				break;
			}
		}


	}
}