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

	sort(a,a + n);

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	return 0;
}