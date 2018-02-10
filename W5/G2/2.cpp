#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;


int main(){

	//freopen("input.txt","r",stdin);
	int n;
	cin >> n;
	int a[n];

	int x;

	for(int i = 0; i < n; ++i){
		cin >> x;
		a[i] = x;
	}

	for(int i = n - 1; i >= 0; --i){
		cout << a[i] << " ";
	}

	return 0;
}