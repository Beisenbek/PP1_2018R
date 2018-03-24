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

	int x;
	vector<int> v;

	while(true){
		cin >> x;
		if(x == 0) break;
		v.push_back(x);
	}

	reverse(v.begin(),v.begin() + v.size()/2);
	reverse(v.begin() + v.size()/2,v.end());

	for(int i = 0; i < v.size(); ++i){
		cout << v[i] << " ";
	}

	return 0;
}