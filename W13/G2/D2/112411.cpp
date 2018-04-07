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

	vector<string> surname;
	vector<string> initials;

	string a,b;

	while(cin >> a >> b){
		initials.push_back(a);
		surname.push_back(b);
	}

	
	for(int i = 0; i < surname.size() - 1; ++i){
		for(int j = i + 1; j < surname.size(); ++j){
			if(surname[i] > surname[j]){
				swap(surname[i],surname[j]);
				swap(initials[i],initials[j]);
			}
		}
	}

	for(int i = 0; i < surname.size(); ++i){
		cout << i + 1 << ". "  << initials[i]  << "  " << surname[i] << endl; 
	}

	
	return 0;
}