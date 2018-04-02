//Search
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

	int n,k;
	cin >> n;

	set<int> s;

	for(int i = 0; i < n; ++i){
		cin >> k;
		s.insert(k);
	}

	int x;
	cin >>x;

	if(s.find(x) != s.end()) cout << "YES";
	else cout << "NO";


	return 0;
}