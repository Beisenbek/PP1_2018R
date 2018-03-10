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

	for(int i = n; i >= 1; --i){
		v.push_back(pow(2,i));
	}

	for(size_t i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	
	return 0;
}