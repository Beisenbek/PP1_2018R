//1517
#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	int n;
	cin >> n;
	bool ok = false;

	for(int i = 1; i * i <= n; ++i){
		int j = n - i * i;
		int k = floor(sqrt(j));
		if(k * k == j){
			cout << "YES" << endl;
			cout << min(i,k) << " " << max(i,k) << endl;
			ok = true;
			break;
		}
	}

	if(!ok) cout << "NO" << endl;

	return 0;
}