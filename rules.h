#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include "number.h"

using namespace std;

vector<rules> derive(vector<rules>);
vector<rules> get_rules(vector<string>);

vector<rules> get_rules(vector<string> list){
	vector<rules> g_rules;
	for(int i = 0; i < list.size(); i++){
		if(list[i] == "vier" || list[i] == "funf" || list[i] == "acht" || list[i] == "neun")
			g_rules.push_back(A0);
		else if(list[i] == "ein" || list[i] == "zwei" || list[i] == "sechs" || list[i] == "sieben")
			g_rules.push_back(A1);
		else if(list[i] == "elf" || list[i] == "zolf")
			g_rules.push_back(A2);
		else if(list[i] == "sech" || list[i] == "sieb")
			g_rules.push_back(A3);
		else if(list[i] == "zwan")
			g_rules.push_back(A4);
		else if(list[i] == "zehn")
			g_rules.push_back(A5);
		else if(list[i] == "zig")
			g_rules.push_back(A6);
		else if(list[i] == "drei")
			g_rules.push_back(A7);
		else if(list[i] == "ssig")
			g_rules.push_back(A8);
		else if(list[i] == "und")
			g_rules.push_back(A9);
		else if(list[i] == "hundert")
			g_rules.push_back(A10);
		else if(list[i] == "tausend")
			g_rules.push_back(A11);
	}
	return g_rules;
}

vector<rules> derive(vector<rules> g_rules){
	vector<rules> d_rules;
	int i = 0;
	while(i < g_rules.size()){
		switch(g_rules[i]){
			case A0:
				if(g_rules.size() == 1)
                                        d_rules.push_back(Z1);
				else{
					switch(g_rules[i + 1]){
						case A5:
							d_rules.push_back(Z2);
							i++;
							break;
						case A6:
							d_rules.push_back(Z3);
							i++;
							break;
						case A9:
                                                        d_rules.push_back(Z5);
                                                        i++;
							break;
						case A10:
                                                        d_rules.push_back(Z6);
                                                        i++;
							break;
						case A11:
                                                        d_rules.push_back(Z10);
                                                        i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case A1:
				if(g_rules.size() == 1)
					d_rules.push_back(Z1);
				else{
					switch(g_rules[i + 1]){
						case A9:
							d_rules.push_back(Z5);
							i++;
							break;
						case A10:
							d_rules.push_back(Z6);
							i++;
							break;
						case A11:
							d_rules.push_back(Z10);
							i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
				break;
			case A2:
				if(g_rules.size() == 1)
					d_rules.push_back(Z2);
				break;
			case A3:
				if(g_rules.size() == 1)
                                        return d_rules;
				else{
					switch(g_rules[i + 1]){
						case A5:
                                                        d_rules.push_back(Z2);
                                                        i++;
							break;
						case A6:
                                                        d_rules.push_back(Z6);
                                                        i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case A4:
				if(g_rules.size() == 1)
                                        return d_rules;
				else{
					switch(g_rules[i + 1]){
						case A6:
                                                        d_rules.push_back(Z3);
                                                        i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case A5:
				if(g_rules.size() == 1)
                                        d_rules.push_back(Z2);
                                break;
			case A6:
				if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case A7:
				if(g_rules.size() == 1)
                                        d_rules.push_back(Z1);
				else {
					switch(g_rules[i + 1]){
						case A5:
							d_rules.push_back(Z2);
							i++;
							break;
						case A8:
                                                        d_rules.push_back(Z3);
                                                        i++;
							break;
						case A9:
                                                        d_rules.push_back(Z5);
                                                        i++;
							break;
						case A10:
                                                        d_rules.push_back(Z6);
                                                        i++;
							break;
						case A11:
							if(g_rules[i + 2] == Z2 && g_rules[i + 3] == A11){
                                                        	d_rules.push_back(Z10);
                                                        	i += 3;
							}
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case A8:
				if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case A9:
				if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case A10:
				if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case A11:
				if(g_rules.size() == 1)
                                        d_rules.push_back(Z11);
				else {
					switch(g_rules[i + 1]){
						case A1:
							d_rules.push_back(Z11);
							i++;
							break;
						case A0:
                                                        d_rules.push_back(Z11);
                                                        i++;
							break;
						case A7:
                                                        d_rules.push_back(Z11);
                                                        i++;
							break;
						case Z3:
                                                        d_rules.push_back(Z11);
                                                        i++;
							break;
						case Z4:
							d_rules.push_back(Z11);
							i++;
							break;
						case Z6:
                                                        d_rules.push_back(Z11);
                                                        i++;
							break;
						case Z7:
                                                        d_rules.push_back(Z11);
                                                        i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case Z1:
				if(g_rules.size() == 1)
					return d_rules;
				break;
			case Z2:
				if(g_rules.size() == 1)
					d_rules.push_back(Z11);
				break;
			case Z3:
				if(g_rules.size() == 1)
					return d_rules;
				break;
			case Z4:
                                if(g_rules.size() == 1)
                                        return d_rules;
				else {
					switch(g_rules[i + 1]){
						case A11:
							d_rules.push_back(Z10);
							i++;
							break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case Z5:
                                if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case Z6:
                                if(g_rules.size() == 1)
                                        return d_rules;
				else {
					switch(g_rules[i + 1]){
						case A1:
							d_rules.push_back(Z7);
							i++;
							break;
						case A0:
                                                        d_rules.push_back(Z7);
                                                        i++;
                                                        break;
						case A7:
                                                        d_rules.push_back(Z7);
                                                        i++;
                                                        break;
						case Z2:
                                                        d_rules.push_back(Z7);
                                                        i++;
                                                        break;
						case Z3:
                                                        d_rules.push_back(Z7);
                                                        i++;
                                                        break;
						case Z4:
                                                        d_rules.push_back(Z7);
                                                        i++;
                                                        break;
						case A11:
                                                        d_rules.push_back(Z10);
                                                        i++;
                                                        break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
                                break;
			case Z7:
                                if(g_rules.size() == 1)
                                        return d_rules;
				else {
					switch(g_rules[i + 1]){
						case A11:
							d_rules.push_back(Z10);
                                                        i++;
                                                        break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;
					}
				}
				break;
			case Z8:
				if(g_rules.size() == 1)
                                        return d_rules;
				else {
					switch(g_rules[i + 1]){
						case A1:
                                                        d_rules.push_back(Z9);
                                                        i++;
                                                        break;
						case A7:
                                                        d_rules.push_back(Z9);
                                                        i++;
                                                        break;
						case Z2:
                                                        d_rules.push_back(Z9);
                                                        i++;
                                                        break;
						case Z3:
                                                        d_rules.push_back(Z9);
                                                        i++;
                                                        break;
						case Z4:
                                                        d_rules.push_back(Z9);
                                                        i++;
                                                        break;
						 default:
                                                        d_rules.push_back(g_rules[i]);
                                                        break;

					}

				}
				break;
			case Z9:
				if(g_rules.size() == 1)
                                        return d_rules;
                                break;
			case Z10:
				if(g_rules.size() == 1)
                                        return d_rules;
                                else {
                                        switch(g_rules[i + 1]){
                                                case A0:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case A1:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case A7:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case Z2:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case Z3:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case Z4:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case Z6:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 case Z7:
                                                        d_rules.push_back(Z11);
                                                        i++;
                                                        break;
						 default:
						        d_rules.push_back(g_rules[i]);
					       	        break;
					}
				}
				break;
			case Z11:
				if(g_rules.size() == 1)
                                        return d_rules;
				break;
		}
	i++;
	}

}
