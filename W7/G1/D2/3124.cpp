#include<iostream>

using namespace std;

int main(){

    string str;
    getline(cin,str);

    int l = str.find_first_of('h');
    int r = str.find_last_of('h');
    
    for(int i = 0; i <=l; ++i){
        cout << str[i];
    }

    for(int i = 0; i < 2; ++i){
        for(int j = l + 1; j< r; ++j){
            cout << str[j];
        }
    }

    for(int i = r; i < str.size(); ++i){
        cout << str[i];
    }

    cout << endl;

    return 0;
}