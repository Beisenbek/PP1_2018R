#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	int n;

	cin >> n;

	int i;

	cin >> i;

	int x = 1 << i;


	if((x & n) == 0){ cout << 0;}
	else cout << 1;


	return 0;
}