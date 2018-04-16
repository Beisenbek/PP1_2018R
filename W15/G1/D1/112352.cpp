#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>

using namespace std;

string hex2bin(string hex);
int hex2dec(char c);
string dec2bin(int x);
string trim(string s);

string hex2bin(string hex){
	string res = "";
	
	int i = -1;
	
	if(hex[0] == '-'){
		cout << '-';
		i++;
	}

	while(++i < hex.size()){
		int dec = hex2dec(hex[i]);
		string bin = dec2bin(dec);
		res = res + bin;
	}
	
	return trim(res);
}

int hex2dec(char c){
	
	c = toupper(c);

	if(c == 'A') return 10;
	if(c == 'B') return 11;
	if(c == 'C') return 12;
	if(c == 'D') return 13;
	if(c == 'E') return 14;
	if(c == 'F') return 15;
	if(c == '0') return 0;
	if(c == '1') return 1;
	if(c == '2') return 2;
	if(c == '3') return 3;
	if(c == '4') return 4;
	if(c == '5') return 5;
	if(c == '6') return 6;
	if(c == '7') return 7;
	if(c == '8') return 8;
	if(c == '9') return 9;
}

string dec2bin(int x){
	string res = "";
	
	for(int i = 1; i <=4; ++i){
		res = char(x % 2 + 48) + res;
		x = x / 2;
	}

	return res;
}

string trim(string s){
	string res = "";

	size_t pos = s.find('1');

	if(pos != string::npos){
		for(size_t i = pos; i < s.size(); ++i){
			res = res + s[i];
		}
	}
	
	return res;
}

int main(){

	string hex;
	cin >> hex;
	cout << hex2bin(hex);
	
	return 0;
}