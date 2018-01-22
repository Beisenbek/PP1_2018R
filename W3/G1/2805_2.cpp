#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

string int2bin(int k){
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

	string t = "";

	for(size_t i = 0; i < s.size(); ++i){
		if(isdigit(s[i])){
			t = t + s[i];
		}else{
			if(t.size() > 0){
				int k = atoi(t.c_str());//convert string to int
				string b = int2bin(k);
				cout << b;t = "";

			}
			cout << s[i];
		}
	}

	if(t.size() > 0){
		int k = atoi(t.c_str());//convert string to int
		string b = int2bin(k);
		cout << b;
		t = "";
	}


	
	return 0;
}