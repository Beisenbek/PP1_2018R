#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int bin2int(string s){

	int res = 0;
	for(int i = 0; i < s.size(); ++i){
		int k = s[i] - 48;
		res = res + k * pow(2,s.size() - 1 - i);
	}
	return res;
}

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

	cout << t << endl;

	t[t.size() - 1 - i] = '1';

	cout << t << endl;
	
	int y = bin2int(t);

	cout << y;

	return 0;
}