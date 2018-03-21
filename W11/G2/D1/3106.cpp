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

	int n,x,m;
	set<int> s1,s2,s3;
	
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> x;
		s1.insert(x);
	}

	cin >> m;
	for(int i = 0; i < m; ++i){
		cin >> x;
		s2.insert(x);
	}

	set<int>::iterator it;

	for(it = s1.begin(); it != s1.end(); ++it){
		if(s2.find(*it) == s2.end()){
			s3.insert(*it);
		}
	}

	for(it = s2.begin(); it != s2.end(); ++it){
		if(s1.find(*it) == s1.end()){
			s3.insert(*it);
		}
	}

	cout << s3.size() << endl;
	for(it = s3.begin(); it != s3.end(); ++it){
		cout << *it << " ";
	}

	
	return 0;
}