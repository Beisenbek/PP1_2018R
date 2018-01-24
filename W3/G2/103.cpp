#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <sstream>

using namespace std;

int main(){
	
	char c;
	cin >> c;

	/*if(c <= 'z' && c >= 'a'){
		cout << char(c - 32);
	}else{
		cout << c;
	}*/

	c = toupper(c);
	
	cout << c;

	return 0;
}