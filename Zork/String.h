#ifndef __STRING_H__
#define	__STRING_H__

#include <string.h>
#include <stdio.h>

typedef unsigned int uint;

class String {
public:
	char* string;

public:
	uint capacity=10;
	String();
	String(unsigned int mem);
	String(char* c_str1);
	String(String &str);
	virtual ~String();

public:
	int size();
	const int length();
	bool empty() const;
	void clear();
	char* c_str();


	bool String::operator==(const char* c_str) const {
		return !strcmp(this->string, c_str) == 0;
	}

	bool String::operator==(const String& str) const {
		return !strcmp(this->string, str.string) == 0;
	}

	const String& String::operator=(const String& str) {
		if (this->capacity != str.capacity) {
			delete[] this->string;
			capacity = strlen(str.string) + 1;
			string = new char[capacity];
		}
		strcpy_s(string, str.capacity, str.string);
		return *this;
	}

	const String& String::operator=(const char* c_str) {
		if (this->capacity != strlen(c_str) + 1) {
			delete[] this->string;
			capacity = strlen(c_str) + 1;
			string = new char[capacity];
		}
		strcpy_s(string, capacity, c_str);
		return *this;
	}
	void print()const{
		printf("%s\n", string);
	}
	


	int String::GetNumArgs(){
		int args = 0;
		if (string != nullptr){
			args++;
			for (int i = 0; i < length(); i++){
				if (string[i] == ' '){
					args++;
				}
			}
			return args;
		}
		else
			printf("Do not understand the command\n");
	}
	String String::GetFirstArg()const{
		
		String arg(capacity);
		int i=0;
		for ( i ; (string[i] != ' ')&& (i<capacity); i++){
			arg.string[i] = string[i];
		}
		arg.string[i] ='\0';
		return arg;
	}

	String String::GetSecArg(){

		String arg(capacity);
		int i, j=0;
		for (i = 0; i < capacity; i++){
			if (string[i] == ' '){
				for (++i; i < capacity; i++){
					arg.string[j++] = string[i];
				}
				arg.string[j] = '\0';

			}
		}
		return arg;
	}
	
	/*Vector<String> String::Tokenize( Vector<String>&tokens){
		

	};*/


};

#endif