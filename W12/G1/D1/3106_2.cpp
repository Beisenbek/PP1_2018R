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

void readData(set<int> &s){
	int n;
	int x;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> x;
		s.insert(x);
	}
}

void processData(set<int> &a, set<int> &b, vector<int> &res){

	for(set<int>::iterator it = a.begin(); it != a.end(); ++it){
		if(b.find(*it) == b.end()){
			res.push_back(*it);
		}
	}
}

void printAnswer(vector<int> &res){
	cout << res.size() << endl;
	for(int i = 0; i < res.size(); ++i){
		cout << res[i] << " ";
	}
}

int main(){

	freopen("input.txt","r",stdin);

	
	set<int> s1,s2;
	vector<int> res;

	readData(s1);
	readData(s2);

	processData(s1,s2,res);
	processData(s2,s1,res);

	printAnswer(res);
	
	return 0;
}