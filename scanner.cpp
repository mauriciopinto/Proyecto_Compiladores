#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    cin >> input;
    
    string token;
    for (int i = 0; i < input.size(); i++){
        token.push_back(input[i]);
        cout << token << endl;
    }
}