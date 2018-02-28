//1598
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	string s;

	getline(cin,s);

	for(int i = 0; i < s.size(); ++i){
		if(i == 0 && s[i] == ' ') continue;
		if(i == s.size() - 1 && s[i] == ' ') continue;
		if(s[i] == ' ' && s[i-1] == ' ') continue;
		cout << s[i];
	}

	return 0;
}