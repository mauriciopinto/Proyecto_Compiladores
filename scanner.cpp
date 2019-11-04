#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
vector <string> A1 {"ein", "zwei", "drei", "vier", "funf", "sechs", "sieben", "acht", "neun"};
vector <string> A2 {"zehn", "elf", "zolf"};
vector <string> A3 {"drei", "vier", "funf", "sech", "sieb", "acht", "neun"};
vector <string> A4 {"zwan", "vier", "funf", "sech", "sieb", "acht", "neun"};
vector <string> A5 {"zehn"};
vector <string> A6 {"zig"};
vector <string> A7 {"drei"};
vector <string> A8 {"ssing"};
vector <string> A9 {"und"};
vector <string> A10 {"hundert"};
vector <string> A11 {"tausend"};

vector<string>::iterator itA1;
vector<string>::iterator itA2;
vector<string>::iterator itA3;
vector<string>::iterator itA4;

bool isSech(string input){
    return input == "sech"? true: false;
}

bool isSieb(string input){
    return input == "sieb"? true: false;
}

bool check (string input, vector <string> &tokens, vector <string> &rules){ 
    itA1 = find(A1.begin(), A1.end(), input);
    itA2 = find(A2.begin(), A2.end(), input);
    itA3 = find(A3.begin(), A3.end(), input);
    itA4 = find(A4.begin(), A4.end(), input);

    if (itA1 != A1.end()){
        tokens.push_back(input);
        rules. push_back("A1");
        return true;
    }
    if (itA2 != A2.end()){
        tokens.push_back(input);
        rules. push_back("A2");
        return true;
    }
    if (itA3 != A3.end()){
        tokens.push_back(input);
        rules. push_back("A3");
        return true;
    }
    if (itA4 != A4.end()){
        tokens.push_back(input);
        rules. push_back("A4");
        return true;
    }
    if (input == A5[0]){
        tokens.push_back(input);
        rules. push_back("A5");
        return true;
    }else if (input == A6[0]){
        tokens.push_back(input);
        rules. push_back("A6");
        return true;
    }
    if (input == A7[0]){
        tokens.push_back(input);
        rules. push_back("A7");
        return true;
    }
    if (input == A8[0]){
        tokens.push_back(input);
        rules. push_back("A8");
        return true;
    }
    if (input == A9[0]){
        tokens.push_back(input);
        rules. push_back("A9");
        return true;
    }
    if (input == A10[0]){
        tokens.push_back(input);
        rules. push_back("A10");
        return true;
    }
    if (input == A11[0]){
        tokens.push_back(input);
        rules. push_back("A11");
        return true;
    }
    return false;
}

void operate(string &token, vector <string> &tokens, vector <string> &rules){
    if (check(token, tokens, rules)){          
    cout << token << endl;
    cout << rules.back() << endl;
    token.erase();
    } 
}

int main(){
    string input;
    vector <string> tokens;
    vector <string> rules;
    cin >> input;
    
    string token;
    for (int i = 0; i < input.size(); i++){
        token.push_back(input[i]);
        if (isSech(token) && input [i+1]== 's' && input[i+2] != 'i'){
            token.push_back(input[i+1]);
            i++;
            operate(token, tokens, rules);

        } 
        if (isSieb(token) && input[i+1]=='e' && input[i+2] == 'n'){
            token.push_back(input[i+1]);
            token.push_back(input[i+2]);
            i+=2;
            operate(token, tokens, rules);
        }
        operate(token, tokens, rules);
    }
}