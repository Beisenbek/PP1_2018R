#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	

	char c;
	cin >> c;

	if(c <= 'z' && c >= 'a'){
		c = c - 32;
	}else if(c <= 'Z' && c >= 'A'){
		c = c + 32;
	}

	cout << c;

	return 0;
}