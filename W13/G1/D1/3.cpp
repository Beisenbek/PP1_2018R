//Array
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

	int n;
	cin >> n;
	vector<int> v;
	int x,y,k;

	for(int i = 0 ; i < n; ++i){
		cin >> k;
		v.push_back(k);
	}

	cin >> x >> y;

	for(int i = 0 ; i < v.size(); ++i){
		bool st = (v[i] % x == 0 && v[i] % y != 0);
		if(!st){
			v.erase(v.begin() + i);
			i--;
		}
	}

	if(v.size() == 0) cout << "-1";
	else{
		for(int i = 0; i < v.size(); ++i){
			cout << v[i] << " ";
		}
	}
	
	return 0;
}