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

	vector<string> v;
	set<string> s;
	string x;

	while(cin >> x){
		v.push_back(x);
		s.insert(x);
	}

	set<string>::iterator it;
	for(it = s.begin(); it != s.end(); ++it){
		int cnt = 0;
		for(int i = 0; i < v.size(); ++i){
			if(*it == v[i]){
				cnt++;
			}
		}
		cout << *it << " " << cnt << endl;
	}

	return 0;
}