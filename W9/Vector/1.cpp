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
	v.push_back(2);
	v.push_back(21);
	v.push_back(12);
	v.push_back(233);


	v[0] = 5;

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}


	return 0;
}