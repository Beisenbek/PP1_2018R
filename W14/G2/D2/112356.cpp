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

set<char> r;

int charR2A(char c){
	if(c == 'I') return 1;
	if(c == 'V') return 5;
	if(c == 'X') return 10;
	if(c == 'L') return 50;
	if(c == 'C') return 100;
	if(c == 'D') return 500;
	if(c == 'M') return 1000;
}

bool isR(string s){
	bool res = true;
	for(int i = 0; i < s.size(); ++i){
		if(r.find(s[i]) == r.end()){
			res = false;
			break;
		}
	}
	return res;
}

int strR2A(string s){

	int res = charR2A(s[s.size()-1]);

	for(int i = s.size() - 2; i >=0; --i){
		int l = charR2A(s[i]);
		int r = charR2A(s[i+1]);
		
		if(l < r){
			res = res - l;
		}else{
			res = res + l;
		}
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);

	r.insert('I');
	r.insert('V');
	r.insert('X');
	r.insert('L');
	r.insert('C');
	r.insert('D');
	r.insert('M');

	string s;
	while(cin >> s){
		if(isR(s)){
			cout << strR2A(s) << " ";
		}else{
			cout << s << " ";
		}
	}

	return 0;
}

//I - 1
//II - 2
//IX - 9
//XI - 1
//MMXIV - 2014 
