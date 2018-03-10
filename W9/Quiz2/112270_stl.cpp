#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>

using namespace std;

int main(){

	int x,n;

	cin >> x >> n;

	vector<int> v;
 
	for(int i = x; i < n + x; ++i){
		v.push_back(i);
	}

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}
	
	return 0;
}