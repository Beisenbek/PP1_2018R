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

	for(int i = 1; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> a[i][j];
		}
	}

	for(int i = 0; i < n; ++i){
		int s = 0;
		for(int j = 0; j < n; ++j){
			s = s + a[i][j];
		}
		cout << s << endl;
	}



	
	return 0;
}