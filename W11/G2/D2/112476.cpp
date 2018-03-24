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
		if(s.find(str[i]) == s.end()){
			s.insert(str[i]);
			cout << str[i];
		}
	}

	
	return 0;
}