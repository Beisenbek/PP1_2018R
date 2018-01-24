#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <sstream>

using namespace std;


long long str2ll(string s){
	stringstream ss;
	ss << s;
	long long res;
	ss >> res;
	return res;
}

string ll2bin(long long k){
	string res = "";

	while(k > 0){
		res = char(k % 2 + 48) + res;
		k = k / 2;
	}

	return res;
}

int main(){

	freopen("input.txt","r",stdin);

	string s;
	getline(cin,s);
	s = s;

	string t = "";

	for(size_t i = 0; i < s.size(); ++i){
		if(isdigit(s[i])){
			t = t + s[i];
		}else{
			if(t.size() > 0){
				long long k = str2ll(t);//convert string to long long
				string b = ll2bin(k);
				cout << b;
				t = "";

			}
			cout << s[i];
		}
	}

	if(t.size() > 0){
		long long k = str2ll(t);//convert string to int
		string b = ll2bin(k);
		cout << b;
		t = "";
	}
	
	return 0;
}