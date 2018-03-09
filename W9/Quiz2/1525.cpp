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

	int m = a[0];
	int ind = 0;

	for(int i = 1; i < n; ++i){
		if(m <= a[i]){
			m = a[i];
			ind = i;
		}
	}

	cout << ind + 1 << endl;

	
	return 0;
}