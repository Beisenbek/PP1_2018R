#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;

	int x;
	int m = -50000;
	int ind = -1;

	for(int i = 1; i <= n; ++i){
		cin >> x;
		if(m <= x){
			m = x;
			ind = i;
		}
	}

	cout << ind << endl;

	return 0;
}