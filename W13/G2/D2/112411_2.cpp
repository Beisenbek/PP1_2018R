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

bool f(pair<string,string> p1, pair<string,string> p2){
	if(p1.second > p2.second) return true;
	return false;
}

int main(){

	freopen("input.txt","r",stdin);

	vector<pair<string,string> > fio;

	string a,b;

	while(cin >> a >> b){
		fio.push_back(make_pair(a,b));
	}

	sort(fio.begin(),fio.end(),f);
	
	for(int i = 0; i < fio.size(); ++i){
		cout << i + 1 << ". "  << fio[i].first  << "  " << fio[i].second << endl; 
	}

	
	return 0;
}