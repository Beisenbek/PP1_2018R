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
	int ind = -1;

	for(int i = 0; i < n; ++i){
		cin >> a[i];
		if(m <= a[i]){
			m = a[i];
			ind = i;
		}
	}

	cout << ind + 1<< endl;

	
	return 0;
}