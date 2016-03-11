#include <string.h>
#include <stdio.h>
int numargs(const char*string){
	int lenght = strlen(string);
	int args;
	for (int i = 0; i < lenght; i++){
		if (string[i] == ' ')
			args++;
		return args;
	}
}

