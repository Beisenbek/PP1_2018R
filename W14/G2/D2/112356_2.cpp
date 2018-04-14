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

map<char, int> m;

bool isR(string s){
	bool res = true;
	for(int i = 0; i < s.size(); ++i){
		if(m[s[i]] == 0){
			res = false;
			break;
		}
	}
	return res;
}

int strR2A(string s){
	int n = s.size()-1;
	int res = m[s[n]];

	for(int i = n - 1; i >=0; --i){

		int l = m[s[i]];
		int r = m[s[i+1]];
		
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

	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;

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
