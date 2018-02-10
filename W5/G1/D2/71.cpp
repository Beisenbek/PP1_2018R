#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	int a[n];

	for(int i = 0; i < n; ++i){
		cin >> a[i];
	}

	int b[n];


	/*b[1] = a[0];
	b[2] = a[1];
	...
	b[n-1] = a[n-2];*/

	for(int i = 1; i < n; ++i){
		b[i] = a[i-1];
	}
	b[0] = a[n-1];

	for(int i = 0; i < n; ++i){
		cout << b[i] << " ";
	}
	
	return 0;
}