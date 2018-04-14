#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
	
int main(){
	string s;
	getline(cin,s);
	char c;
	char rim[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	int arab[]= {1000, 900, 500, 400,  100,  90,  50,  40,    10 ,  9,   5,   4,    1};
	int k = 0;
	//for(int i = 0; i < s.size(); i++){

		for(int j = 0; j < 13; j++){
			c = s.find(rim[j]);
			while(rim[j] == c){
				k = k + arab[j];
			}
		}
	
	cout << k;
	return 0;
}
