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

	int n,k;
	cin >> n >> k;

	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	set<int> s;

	for(int i = 0; i < k; ++i){
		s.insert(a[i]);
	}

	cout << *s.begin() << endl;

	for(int i = 1; i < n - k + 1; ++i){
		set<int>::iterator pos = s.find(a[i-1]);
		
	}

	return 0;
}