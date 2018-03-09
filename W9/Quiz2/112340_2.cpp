#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

string f(string s){

	string res = "";

	size_t i = s.size() - 1;

	while(i >= 0 && s[i] == ' '){
		i--;
	}

	if(i >= 0){
		res = s.substr(0,i + 1);
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);
	string s;

	getline(cin,s);

	s = f(s);

	size_t i = s.find_last_of(' ');

	if(i == string::npos){
		cout << s << endl;
	}
	else{
		cout << s.substr(i+1);
	}

	return 0;
}