#include <stdio.h>
#include <string>
#include <vector>

using namespace std;

enum = 

bool scan(string);
vector<string> parse;
int convert(string);

bool scan(string str){
	return true;
}

vector<string> parse(string str){
	vector<string> s;
	return s;
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
