#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>
#include <sstream>
#include <map>
#include <set>

using namespace std;

int main(){

	
	int n;

	cin >> n;

	int a[n];
	int k = 0;

	for(int i = n; i >= 1; --i){
		a[k] = pow(2,i);
		k++;
	}

	for(int i = 0; i < n; ++i){
		cout << a[i] << " ";
	}

	
	return 0;
}