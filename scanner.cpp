#include "token.h"
bool isZ3 (vector <string> &rules,int &i){
    if ((rules[i] == "A4" && rules[i] == "A6") || (rules[i] == "A0" && rules[i] == "A6") || (rules[i] == "A7" && rules[i] == "A8") || (rules[i] == "A3" && rules[i] == "A6") ){
        cout << "Z3" << endl;
        i += 2;
        return true;
    }
    return false;
}

void parser (vector <string> &rules){
    /*
    else if (rules[i] == "A5" && rules[i] == "A3") {
            cout << "Z4" << endl;
            i+= 2;
        }
    */
    int n = rules.size();
    cout << n << endl;
    for (int i = 0; i < n; i++){
        if (n >= 2) {
            if ( (rules[i] == "A3" && rules[i+1] == "A5") || (rules[i] == "A7" && rules[i+1] == "A5") || (rules[i] == "A0" && rules[i+1] == "A5")){
                cout << "Z2" << endl;
                i+=2;
            } else if ((rules[i] == "A4" && rules[i+1] == "A6") || (rules[i] == "A0" && rules[i+1] == "A6") || (rules[i] == "A7" && rules[i+1] == "A8") || (rules[i] == "A3" && rules[i+1] == "A6") ){
                cout << "Z3" << endl;
                i+= 2;
            } else if ((rules[i] == "A1" && rules[i+1] == "A9") || (rules[i] == "A0" && rules[i+1] == "A9") || (rules[i] == "A7" && rules[i+1] == "A9")){
                cout << "Z5" << endl;
                i+= 2;
            }else if ((rules[i] == "A7" && rules[i+1] == "A10") || (rules[i] == "A1" && rules[i+1] == "A10") || (rules[i] == "A0" && rules[i+1] == "A10")){
                cout << "Z6" << endl;
                i+= 2;
            }
            cout << "ii: " << i << endl;

            if((rules[i]== "A1") || (rules[i]== "A0") || (rules[i]== "A7")){
                cout << "Z1" << endl;
            } else if ((rules[i]== "A2") || (rules[i]== "A5")){
                cout << "Z2" << endl;
            }
            cout << "ie: " << i << endl;
        } else{
            if((rules[i]== "A1") || (rules[i]== "A0") || (rules[i]== "A7")){
                cout << "Z1" << endl;
            } else if ((rules[i]== "A2") || (rules[i]== "A5")){
                cout << "Z2" << endl;
            }
            cout << "ie: " << i << endl;
        }
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
        if (isSech(token) && input [i+1]== 's' && input[i+2] != 'i'  && input [i+3] != 'c'){
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

    //parser(rules);
}