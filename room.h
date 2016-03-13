#ifndef ROOM_H
#define ROOM_H

enum rom{ woods, knightsroom, kitchen, throne, smithy, stables, barracks, princess, castle };
class room{
public:
	 char* name;
	 char* desc;

	 void StoreRoom( char* title, char* description);
};


#endif