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

	int a,b;
	cin >> a >> b;

	/*
	 ax = b

	|a |b |
	-----
	|0 |0 | --> 'many solutions'
	-----
	|0 |!0| --> 'no solution'
	-----
	|!0|0 | --> 'x = 0'
	-----
	|!0|!0| --> if b % a == 0 => x = b/a
	*/

	if(a == 0){
		if(b == 0) cout << "many solutions";
		else cout << "no solution";
	}else{
		if(b == 0 || b % a == 0) cout << b / a;
		else cout << "no solution";
	}
 
	return 0;
}