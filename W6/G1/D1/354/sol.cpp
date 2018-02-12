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

	int a[n][n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			a[i][j] = 0;
		}
	}

	/*
	a[0][n-1-0] = 1;
	a[1][n-1-1] = 1;
	a[2][n-1-2] = 1;
	...
	a[i][n-1-i] = 1;
	*/

	for(int i = 0; i < n; ++i){
		int j = n - 1 - i;
		a[i][j] = 1;
	}



	/*
	0:-
	1:[n-1,n-2)
	2:[n-1,n-2,n-3)
	3:[n-1,n-2,n-3,n-4)

	*/

	for(int i = 1; i < n; ++i){
		for(int j = n - 1; j > n - 1 - i; --j){
			a[i][j] = 2;
		}
	}
	
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j]  << " ";
		}
		cout << endl;
	}

	
	return 0;
}