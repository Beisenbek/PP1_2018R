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

void find_diff(set<int> &first, set<int> &second, set<int> &res){
	for(set<int>::iterator it = first.begin(); it != first.end(); ++it){
		if(second.find(*it) == second.end()){
			res.insert(*it);
		}
	}
}

void fill_set(set<int> &target){
	int x,k;
	cin >> k;
	for(int i = 0; i < k; ++i){
		cin >> x;
		target.insert(x);
	}
}

int main(){

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);

	set<int> s,t,z;

	fill_set(s);
	fill_set(t);


	find_diff(s,t,z);
	find_diff(t,s,z);

	cout << z.size() << endl;

	for(set<int>::iterator it = z.begin(); it != z.end(); ++it){
		cout << *it << " ";
	}
	
	return 0;
}
