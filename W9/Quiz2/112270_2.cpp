#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int x,n;

	cin >> x >> n;

	int a[n];

	for(int i = x; i <= n + x; ++i){
		a[i-x] = i;
	}

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}
	
	return 0;
}