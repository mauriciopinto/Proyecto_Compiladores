#include <stdio.h>
#include <iostream>
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
	for(z1_it = z1_map.begin(); z1_it != z1_map.end(); z1_it++)
		if(str == z1_it->first)
			return true;

	for(z2_it = z2_map.begin(); z2_it != z2_map.end(); z2_it++)
		if(str == z2_it->first)
			return true;

	for(z3_it = z3_map.begin(); z3_it != z3_map.end(); z3_it++) 
                if(str == z3_it->first)
                        return true;

	for(z4_it = z4_map.begin(); z4_it != z4_map.end(); z4_it++)
                if(str == z4_it->first)
                        return true;
	
	for(z5_it = z5_map.begin(); z5_it != z5_map.end(); z5_it++)
                if(str == z5_it->first)
                        return true;

	for(z6_it = z6_map.begin(); z6_it != z6_map.end(); z6_it++) 
                if(str == z6_it->first)
                        return true;
	
	for(drei_it = drei_map.begin(); drei_it != drei_map.end(); drei_it++) 
                if(str == drei_it->first)
                        return true;
	
	for(zehn_it = zehn_map.begin(); zehn_it != zehn_map.end(); zehn_it++)
                if(str == zehn_it->first)
                        return true;
	
	for(zig_it = zig_map.begin(); zig_it != zig_map.end(); zig_it++)
                if(str == zig_it->first)
                        return true;

	for(ssig_it = ssig_map.begin(); ssig_it != ssig_map.end(); ssig_it++)
                if(str == ssig_it->first)
                        return true;

	for(und_it = und_map.begin(); und_it != und_map.end(); und_it++)
                if(str == und_it->first)
                        return true;
	return false;
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
		s += str[i];
		if(in_maps(s)){
			list.push_back(s);
			s.clear();
		}
	}
	for (auto l :list)
		cout << l << endl;
	return list;
}

int convert(string str){
	vector<string> s = parse(str);
	return 1;
}

int main(){
	init_maps();
	string number;
	printf("Ingrese un numero en aleman: ");
	cin >> number;
	if(!scan(number)){
		printf("cadena invalida");
		return 0;
	}
	convert(number);
}
