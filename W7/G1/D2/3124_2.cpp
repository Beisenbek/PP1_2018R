#include<iostream>

using namespace std;

int main(){

    string str;
    getline(cin,str);

    int l = str.find_first_of('h');
    int r = str.find_last_of('h');
    
    cout << str.substr(0,r);
    cout << str.substr(l+1,str.size());
    
    cout << endl;

    return 0;
}