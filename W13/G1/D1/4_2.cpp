//Eraser
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

string erase(string s, char c){
	string res = "";
	for(int i = 0; i < s.size(); ++i){
		if(s[i] != c){
			res = res + s[i];
		}
	}
	return res;
}

int main(){

	string s,l;

	getline(cin,s);
	getline(cin,l);
	
	set<char> ms;
	set<char>::iterator it;

	for(int i = 0; i < l.size(); ++i){
		ms.insert(l[i]);
	}

	for(it = ms.begin(); it != ms.end(); ++it){
		s = erase(s,*it);
	}

	cout << s;

	return 0;
}