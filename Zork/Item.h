#ifndef ITEM_H
#define ITEM_H
#include "Entity.h"
class Item : public Entity{
public:
	Item(){};
	Item(String n, String d){
		name = n;
		desc = d;
	}
	virtual~Item(){};

};




#endif