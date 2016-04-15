#ifndef _PLAYER_H_
#define _PLAYER_H_
#include "room.h"


class player:public Entity{
public:
	
	player(){};
	virtual~player(){};
	place curr;
	Vector<Item>inventory;
	uint hp;
	uint armor;
	uint attack;
	void LookPlayerItems()const{
		if (inventory.num_elements != 0){
			for (int i = 0; i < inventory.num_elements; i++){
				inventory[i].name.print();
				inventory[i].desc.print();
			}
		}
		else
			printf("Empty\n");
	}
	
	
};






#endif