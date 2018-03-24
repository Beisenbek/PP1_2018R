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

	for(int i = 0; i < str.size(); ++i){
		if(str[i] <= '9' && str[i] >= '0'){
			s.insert(str[i]);
		}
	}

	if(s.size() == 0){
		cout << "NO";
	}else{
		for(set<char>::iterator it = s.begin(); it != s.end(); ++it){
			cout << *it ;
		}
	}
	
	return 0;
}