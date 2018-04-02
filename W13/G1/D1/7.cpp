//Set
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

	string s,t;
	set<string> ms;
	set<string> :: iterator it;

	while(cin >> s){
		t = s;
		reverse(t.begin(), t.end());
		if(t != s){
			ms.insert(s);
		}
	}

	for(it = ms.begin(); it != ms.end(); ++it){
		cout << *it << endl;
	}

	return 0;
}