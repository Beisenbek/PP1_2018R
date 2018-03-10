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

	for(int i = n; i >= 1; --i){
		int d = pow(2,i);
		cout << d << " ";
	}

	
	return 0;
}