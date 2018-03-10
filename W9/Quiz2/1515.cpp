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

	int s = 0;

	while( n != 0){
		s = s + n % 10;
		n  = n / 10;
	}

	cout << s << endl;

	
	return 0;
}