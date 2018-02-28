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

	for(int i = 0; i * i <= n; ++i){
		for(int j = 0; j * j <= n; ++j){
			if(i * i + j * j == n){
				ok = true;
				cout << "YES" << endl;
				cout << min(i,j) << " " << max(i,j) << endl;
				break;
			}
		}	
		if(ok) break;
	}

	if(!ok) cout << "NO" << endl;

	return 0;
}