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

	int n,x;
	cin >> n;
	vector<int> v;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	for(int i = v.size() - 1; i >= 0; --i){
		cout << v[i] << " ";
	}
	
	return 0;
}