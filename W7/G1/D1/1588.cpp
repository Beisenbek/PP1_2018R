#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	
	int n;

	cin >> n;

	char c[n][n];

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			if(i == j) c[i][j] = '*';
			else if(i + j == n - 1) c[i][j] = '*';
			else if(i == (n - 1)/2) c[i][j] = '*';
			else if(j == (n - 1)/2) c[i][j] = '*';
			else c[i][j] = ' ';
		}
	}

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cout << c[i][j];
		}
		cout << endl;
	}

	
	return 0;
}