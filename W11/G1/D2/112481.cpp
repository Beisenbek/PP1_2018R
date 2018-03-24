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

	string a,b;
	getline(cin,a);
	getline(cin,b);

	set<char> s;

	for(size_t i = 0; i < a.size(); ++i){
		s.insert(toupper(a[i]));
	}

	for(size_t i = 0; i < b.size(); ++i){
		s.insert(toupper(b[i]));
	}
	
	bool ok = true;

	for(char c = 'A'; c <='Z'; ++c){
		if(s.find(c) == s.end()){
			cout << c;
			ok = false;
		}
	}

	if(ok == true){
		cout << 0 << endl;
	}

	return 0;
}