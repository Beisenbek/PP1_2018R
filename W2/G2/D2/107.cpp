#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){

	string s;
	getline(cin,s);
	string t;
	s = s + " ";
	string best = "";

	for(int i = 0; i < s.size(); ++i){
		if(s[i] != ' '){
			t = t + s[i];
		}else{
			
			if(t.size() > best.size()){
				best = t;
			}

			t = "";
		}
	}

	cout << best << endl;
	cout << best.size() << endl;

	return 0;
}