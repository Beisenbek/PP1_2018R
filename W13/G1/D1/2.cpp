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
	int a[n];
	vector<int> v;
	int x,y;

	for(int i = 0 ; i < n; ++i){
		cin >> a[i];
	}

	cin >> x >> y;

	for(int i = 0 ; i < n; ++i){
		if(a[i] % x == 0 && a[i] % y != 0){
			v.push_back(a[i]);
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