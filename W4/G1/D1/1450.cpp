#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int main(){

	string s;
	cin >> s;

	/*"abcd"
	   0123
	 i = 2;
	 l = 2;*/

	string best = "";

	for(int i = 0; i < s.size(); ++i){
		for(int l = 1; l <= s.size() - i; ++l){
			string t = s.substr(i,l);
			string p = t;
			reverse(t.begin(),t.end());
			if(p == t && best.size() < p.size()){
				best = p;
			}
		}
	}	

	cout << best << endl;

	return 0;
}