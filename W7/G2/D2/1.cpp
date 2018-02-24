#include<iostream>

using namespace std;

int main(){

    string str;

    getline(cin,str);

    /*cout << str.size() << endl;
    cout << str.length() << endl;

    cout << str.substr(4) << endl;
    cout << str.substr(0,4) << endl;
    cout << str.substr(4,npos) << endl;
    */

    cout << str.substr(4) << endl;
    //cout << str.substr() << endl;

    return 0;
}