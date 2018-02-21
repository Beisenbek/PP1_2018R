#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	char a[n][n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j) a[i][j] = '*';
			else if(i + j == n - 1) a[i][j] = '*';
			else if(j == (n - 1)/2) a[i][j] = '*';
			else if(i == (n - 1)/2) a[i][j] = '*';
			else a[i][j] = '_';
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << a[i][j];
		}
		cout << endl;
	}

	
	return 0;
}