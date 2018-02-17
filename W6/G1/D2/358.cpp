#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int n,m;
	cin >> n >> m;
	int a[n][m];
	int s[n];

	for(int i = 0; i < n; ++i){
		s[i] = 0;
		for(int j = 0; j < m; ++j){
			cin >> a[i][j];
			s[i] = s[i] + a[i][j];
		}
	}

	int bestI = 0;
	int bestJ = 0;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			if(a[bestI][bestJ] < a[i][j]){
				bestI = i;
				bestJ = j;
			}else if(a[bestI][bestJ] == a[i][j] && s[bestI] < s[i]){
			 	bestI = i;
				bestJ = j;
			}
		}
	}

	cout << bestI << endl;



	return 0;
}