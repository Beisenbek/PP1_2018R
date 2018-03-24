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

int main(){

	freopen("input.txt","r",stdin);

	string str;
	getline(cin, str);
	set<char> s;

	for(size_t i = 0; i < str.size(); ++i){
		s.insert(str[i]);
	}

	bool ok = false;

	for(char c = '9'; c >= '0'; --c){
		if(s.find(c) == s.end()){
			cout << c;
			ok = true;
		}
	}

	if(!ok){
		cout << "NO";
	}

	
	return 0;
}