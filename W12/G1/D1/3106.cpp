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
	int x;
	set<int> s1,s2;
	vector<int> res;

	for(int i = 0; i < n; ++i){
		cin >> x;
		s1.insert(x);
	}

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		s2.insert(x);
	}	


	set<int>::iterator it;

	for(it = s1.begin(); it != s1.end(); ++it){
		int v = *it;
		if(s2.find(v) == s2.end()){
			res.push_back(v);
		}
	}

	for(it = s2.begin(); it != s2.end(); ++it){
		int v = *it;
		if(s1.find(v) == s1.end()){
			res.push_back(v);
		}
	}

	cout << res.size() << endl;

	for(int i = 0; i < res.size(); ++i){
		cout << res[i] << " ";
	}

	
	return 0;
}