//1525
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	int x;
	int mx;
	int k = 1;
	cin >> mx;

	for(int i = 1; i < n; ++i){
		cin >> x;
		if(x >= mx){
			mx = x;
			k = i + 1;
		}
	}

	cout << k << endl;
	
	return 0;
}