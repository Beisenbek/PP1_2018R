#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

string int2bin(int x){

	string res = "";

	do{
		res = char(x % 2 + 48) + res;
		x = x / 2;
	}while(x > 0);

	return res;
}

int main(){
	
	int x,i;
	cin >> x >> i;

	string t = int2bin(x);

	cout << t[t.size() - 1 - i];

	return 0;
}