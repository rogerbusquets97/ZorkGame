#ifndef ITEM_H
#define ITEM_H
#include "Entity.h"


class Item : public Entity{
public:
	Item(){};
	int ID;
	Item(String n, String d, int num){
		name = n;
		desc = d;
		ID = num;
	}
	virtual~Item(){};

};




#endif