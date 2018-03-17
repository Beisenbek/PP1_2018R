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

	string base,pattern;
	getline(cin,base);
	getline(cin,pattern);

	int cnt = 0;

	for(int i = 0; i <= base.size() - pattern.size(); ++i){
		string temp = base.substr(i,pattern.size());
		if(pattern == temp){
			cnt++;
		}
	}

	cout << cnt << endl;
	
	return 0;
}