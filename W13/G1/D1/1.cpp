//Array
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
	int x,y;

	for(int i = 0 ; i < n; ++i){
		cin >> a[i];
	}

	cin >> x >> y;

	bool ok = false;

	for(int i = 0 ; i < n; ++i){
		if(a[i] % x == 0 && a[i] % y != 0){
			cout << a[i] << " ";
			ok = true;
		}
	}

	if(ok == false) cout << "-1";
	
	return 0;
}