#include <stdio.h>
#include <string>
#include <vector>
#include "structs.h"

string invalid_chars = "0123456789-=+_)(*&^%$#@!`~}]{[';:?/>.<, ";

bool in_string(string);
bool scan(string);
vector<string> parse(string);
int convert(string);
bool in_maps(string);

/*busca en todos los maps el string*/
bool in_maps(string str){
	for(z1_it = z1_map.begin(); z1_it != z1_map.end(); z1_it++){
		
	}
}

bool in_string(char character, string str){
	for(int i = 0; i < str.size(); i++){
		if(character == str[i])
			return true;
	}
	return false;
}

bool scan(string str){
	if(str.size() == 0)
		return false;
	for(int i = 0; i < str.size(); i++){
		if(in_string(str[i], invalid_chars))
			return false;
	}
	return true;
}

vector<string> parse(string str){
	vector<string> list;
	string s;
	for(int i = 0; i < str.size(); i++){
		if(in_maps(s)){
			list.push_back(s);
			s.clear();
		}
		s += str[i];
	}
	return list;
}

int convert(string str){
	vector<string> s = parse(str);
	return 1;
}

int main(){
	string number;
	printf("Ingrese un numero en aleman");
	scanf("%s", number);
	if(!scan(number)){
		printf("cadena invalida");
		return 0;
	}
	convert(number);
}
