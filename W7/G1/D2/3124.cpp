#include<iostream>

using namespace std;

int main(){

    string str;
    getline(cin,str);

    cout << str.find_first_of('h') << endl;
    cout << str.find_last_of('h') << endl;

    return 0;
}