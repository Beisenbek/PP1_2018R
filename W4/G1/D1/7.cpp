#include <iostream>
#include <stdio.h>

using namespace std;

int main(){

	int x;
	cin >> x;
	string s = "";

	while(x >  0){
		s = char(x % 2+48) + s;
		x = x / 2;
	}

	cout << s << endl;

	return 0;
}