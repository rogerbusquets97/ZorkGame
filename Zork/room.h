#ifndef ROOM_H
#define ROOM_H
#include "Entity.h"
#include "String.h"
#include "Item.h"

enum place{ woods, knightsroom, kitchen, throne, smithy, stables, barracks, princess, castle };
class room:public Entity{

	
public:
	
	room(){};
	room(String n, String d, Entity_type t){
		n = name;
		d = desc;
		t = type;

	}
	virtual~room(){};

	Vector<Item>objects;
	void LookItems()const{
		for (int i = 0; i < objects.num_elements; i++){
			objects[i].name.print();
			objects[i].desc.print();
		}
	}
	bool checkitems( int obj) {
		for (int i = 0; i < objects.num_elements; i++){
			if (objects[i].ID == obj){
				return true;
			}
			else return false;
		}
	}

	
};


#endif