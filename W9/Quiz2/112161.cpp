#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int n;
	cin >> n;

	if(n == 1 || n == 2 || n == 12) cout << "winter";
	else if(n == 3 || n == 4 || n == 5) cout << "spring";
	else if(n == 6 || n == 7 || n == 8) cout << "summer";
	else if(n == 9 || n == 10 || n == 11) cout << "autumn";
	else cout << "NO";
	
	return 0;
}