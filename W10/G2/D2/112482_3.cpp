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

	for(int i = 0; i < v.size() - 1; ++i){
		for(int j = i + 1; j < v.size(); ++j){
			if(v[i] > v[j]){
				swap(v[i],v[j]);
			}
		}
	}

	for(int i = 0; i < n; ++i){
		cout << v[i] << " ";
	}

	
	return 0;
}