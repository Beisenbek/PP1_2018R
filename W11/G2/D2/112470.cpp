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
	s.insert('.');
	s.insert(',');
	s.insert(';');
	s.insert(':');
	s.insert('!');
	s.insert('?');
	
	int cnt = 0;
	for(size_t i = 0; i < str.size(); ++i){
		if(s.find(str[i]) != s.end()){
			cnt++;
		}
	}

	cout << cnt << endl;

	
	return 0;
}