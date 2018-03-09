#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

string trim_b(string s){
	string res = "";
	int i = 0;

	while(i < s.size() && s[i] == ' ' ){
		i++;
	}

	if(i < s.size()){
		res = s.substr(i); 
	}

	return res;
}


string trim_e(string s){
	string res = "";
	int i = s.size() - 1;

	while(i >=0 && s[i] == ' ' ){
		i--;
	}

	if(i >= 0){
		res = s.substr(0,i + 1); 
	}

	return res;
}

string trim(string s){
	return trim_e(trim_b(s));
}

int main(){
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	string str;
	getline(cin,str);

	str = trim(str);

	for(int i = 0; i < str.size(); ++i){
		if(i > 0 && str[i] == ' ' && str[i-1] == ' ') continue;
		cout << str[i];
	}

	return 0;
}