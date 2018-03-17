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

	freopen("input.txt","r",stdin);

	int n;
	cin >> n;
	int v[n]; 

	for(int i = 0; i < n; ++i){
		cin >> v[i];
	}

	sort(v,v + n);

	for(int i = 0; i < n; ++i){
		cout << v[i] << " ";
	}

	
	return 0;
}