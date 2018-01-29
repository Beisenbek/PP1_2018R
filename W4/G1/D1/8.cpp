#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int x;
	cin >> x;
	string s = "";

	do{
		s = char(x % 2+48) + s;
		x = x / 2;
	}while(x >  0);

	cout << s << endl;

	return 0;
}