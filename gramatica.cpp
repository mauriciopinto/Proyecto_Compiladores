#include "rules.h"
#include "structs.h"

string invalid_chars = "0123456789-=+_)(*&^%$#@!`~}]{[';:?/>.<, ";

bool in_string(string);
bool validate(string);
vector<string> scan(string);
int parse(string);
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

bool validate(string str){
	if(str.size() == 0)
		return false;
	for(int i = 0; i < str.size(); i++){
		if(in_string(str[i], invalid_chars))
			return false;
	}
	return true;
}

vector<string> scan(string str){
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

int parse(string str){
	vector<string> s = scan(str);
	vector<rules> g_rules = get_rules(s);
	for(int i = 0; i < 4; i++){
		for(int i = 0; i < g_rules.size(); i++)
			cout << g_rules[i] << " ";
		cout << endl;
		g_rules = derive(g_rules);
	}	
	return 1;
}

int main(){
	init_map();
	string number;
	printf("Ingrese un numero en aleman\n");
	cin >> number;
	if(!validate(number)){
		printf("cadena invalida\n");
		return 0;
	}
	parse(number);
}
