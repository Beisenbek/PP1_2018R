//1568
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int x;
	int a[10];

	cin >> x;

	for(int i = 1; i <=9; ++i){
		a[i] = 0;
	}

	while(x != 0){
		a[x]++;
		cin >> x;
	}

	for(int i = 1; i <=9; ++i){
		cout << a[i] << " ";
	}

	return 0;
}