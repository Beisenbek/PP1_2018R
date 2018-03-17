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

	size_t pos = base.find(pattern);
	int cnt = 0;

	while(pos != string::npos){
		cnt++;
		pos = base.find(pattern,pos + 1);
	}

	cout << cnt << endl;
	
	return 0;
}