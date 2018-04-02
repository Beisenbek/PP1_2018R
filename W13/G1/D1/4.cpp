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
	
	for(int i = 0; i < l.size(); ++i){
		s = erase(s,l[i]);
	}

	cout << s;

	return 0;
}