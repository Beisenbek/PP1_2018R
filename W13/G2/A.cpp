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
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int x;
	cin >> x;

	int cnt = 0;

	for(int i = 0; i < n; ++i){
		if(a[i] == x) cnt++;
	}	

	cout << cnt;
	
	return 0;
}