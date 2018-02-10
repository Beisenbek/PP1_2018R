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

	int cnt = 0;

	for(int i = 1; i < n - 1; ++i){
		if(a[i] > a[i-1] && a[i] > a[i+1]){
			cnt++;
		}
	}

	cout << cnt;
	
	return 0;
}