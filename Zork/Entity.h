#ifndef ENTITY_H
#define ENTITY_H
#include "String.h"
#include "Vector.h"

enum Entity_type{ROOM,PLAYER,EXIT,ITEM};
class Entity{
public: 
	Entity(){
	}
	Entity(String n, String d,Entity_type t){
		name = n;
		desc = d;
		type = t;

	}
	virtual~Entity(){};
	String name;
	String desc;
	//Vector<Entity>entities;
	Entity_type type;

	
};
#endif