#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int x;

	int a[10];

	cin >> x;

	for(int i = 1; i <=9; ++i){
		a[i] = 0;
	}

	while(x != 0){
		a[x] = a[x] + 1;
		cin >> x;
	}

	for(int i = 1; i <=9; ++i){
		cout << a[i] << " ";
	}

	
	return 0;
}