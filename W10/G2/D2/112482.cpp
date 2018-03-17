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

	vector<int> v; 
	int n,x;
	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());


	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	
	return 0;
}