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
	cin >> str;


	set<char> used;
	set<char> candidate;
	set<char>::iterator it;	
	
	for(int i = 0; i < str.size(); ++i){
		if(used.find(str[i]) == used.end()){
			candidate.insert(str[i]);
			used.insert(str[i]);
		}else{
			it = candidate.find(str[i]);
			candidate.erase(it);
		}
	}

	for(it = candidate.begin(); it != candidate.end(); ++it){
		cout << *it;
	}


	return 0;
}