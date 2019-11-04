#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "number.h"
#include "structs.h"

string invalid_chars = "0123456789-=+_)(*&^%$#@!`~}]{[';:?/>.<, ";

bool in_string(string);
bool scan(string);
vector<string> parse(string);
int convert(string);
bool in_maps(string);

/*busca en todos los maps el string*/
bool in_maps(string str){
	for(it = values.begin(); it != values.end(); it++) 
                if(str == it->first)
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
	int i = 0;
	while(i < str.size()){
		s += str[i];
		if(s == "sech" && str[i + 1] == 's'){
			i++;
			s += str[i];
		}
                if(s == "sieb" && str[i + 1] == 'e' && str[i + 2] == 'n'){
			i++;
			s += str[i];
			i++;
			s += str[i];
		}
		if(in_maps(s)){
			list.push_back(s);
			s.clear();
		}
		i++;
	}
	for(int i = 0; i < list.size(); i++){
		cout << list[i] << endl;
	}
	return list;
}

int convert(string str){
	vector<string> s = parse(str);
	rules r;
	switch(r){
		case Z1:
			break;
		case Z2:
			break;
	 	case Z3:
			break;
		case Z4:
			break;
		case Z5:
			break;
		case Z6:
			break;
		case Z7:
			break;
		case Z8:
			break;
		case Z9:
			break;
		case Z10:
			break;
		case Z11:
			break;
		case A0:
			break;
		case A1:
			break;
		case A2:
			break;
		case A3:
			break;
		case A4:
			break;
		case A5:
			break;
		case A6:
			break;
		case A7:
			break;
		case A8:
			break;
		case A9:
			break;
		case A10:
			break;
		case A11:
			break;		
	}
	return 1;
}

int main(){
	init_map();
	string number;
	printf("Ingrese un numero en aleman");
	cin >> number;
	if(!scan(number)){
		printf("cadena invalida");
		return 0;
	}
	convert(number);
}
