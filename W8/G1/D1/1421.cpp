#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	string s;
	getline(cin,s);

	cout << s[0];
	for(int i = 1; i < s.size(); ++i){
		if(s[i] == ' ' && s[i-1] == ' ') continue;
		cout << s[i];
	}
	
	return 0;
}