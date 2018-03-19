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
	freopen("output.txt","w",stdout);

	int n,m,x;
	set<int> s,t,z;

	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> x;
		s.insert(x);
	}

	cin >> m;
	for(int i = 0; i < m; ++i){
		cin >> x;
		t.insert(x);
	}

	set<int>::iterator it;

	for(it = s.begin(); it != s.end(); ++it){
		if(t.find(*it) == t.end()){
			z.insert(*it);
		}
	}

	for(it = t.begin(); it != t.end(); ++it){
		if(s.find(*it) == s.end()){
			z.insert(*it);
		}
	}

	cout << z.size() << endl;

	for(it = z.begin(); it != z.end(); ++it){
		cout << *it << " ";
	}


	
	return 0;
}
