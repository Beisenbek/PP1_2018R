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
	int m = -50000;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(m < a[i]){
			m = a[i];
		}
	}

	for(int i = n - 1; i >= 0; --i){
		if(m == a[i]){
			cout << i + 1 << endl;
			break;
		}
	}

	
	return 0;
}