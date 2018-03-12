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

	vector<int> v;

	for(int i = 1; i <= 100; ++i){
		if(i % 2 == 0){
			v.push_back(i);
		}
	}

	cout << v.size() << endl;

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";	
	}
	
	return 0;
}