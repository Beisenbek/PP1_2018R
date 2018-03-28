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

int find(vector<char> v, char c){
	int index = -1;

	for(int i = 0; i < v.size(); ++i){
		if(v[i] == c){
			index = i;
			break;
		}
	}

	return index;
}



int main(){

	freopen("input.txt","r",stdin);

	string str;
	cin >> str;


	vector<char> used;
	vector<char> candidate;

	for(int i = 0; i < str.size(); ++i){
		if(find(used,str[i]) == -1){
			candidate.push_back(str[i]);
			used.push_back(str[i]);
		}else{
			int index = find(candidate,str[i]);
			candidate.erase(candidate.begin() + index);
		}
	}

	sort(candidate.begin(),candidate.end());

	for(int i = 0; i < candidate.size(); ++i){
		cout << candidate[i];
	}


	return 0;
}