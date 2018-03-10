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
	//freopen("output.txt","w",stdout);

	int n,x;
	vector<int> v;
	vector<int>::iterator it;

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(),v.end());

	for(it = v.begin(); it != v.end(); ++it){
		cout << *it << " ";
	}

	return 0;
}