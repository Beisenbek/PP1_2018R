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

	for(int i = 1; i <= n; ++i){
		v.push_back(i);
	}


	do{
		for(int i = 0; i < n; ++i){
			cout << v[i] << " ";
		}
		cout << endl;
	}while(next_permutation(v.begin(),v.end()));
	

	return 0;
}