#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){

	freopen("input.txt","r",stdin);

	int x;

	int odin = 0;
	int dva = 0;
	int tri = 0;
	int chetire = 0;
	int pyat = 0;
	int shest = 0;
	int sem = 0;
	int vosem = 0;
	int devyat = 0;

	cin >> x;

	while(x != 0){
		if(x == 1) odin++; 
		if(x == 2) dva++; 
		if(x == 3) tri++; 
		if(x == 4) chetire++; 
		if(x == 5) pyat++; 
		if(x == 6) shest++; 
		if(x == 7) sem++; 
		if(x == 8) vosem++; 
		if(x == 9) devyat++; 
		cin >> x;
	}

	cout << odin << " ";
	cout << dva << " ";
	cout << tri << " ";
	cout << chetire << " ";
	cout << pyat << " ";
	cout << shest << " ";
	cout << sem << " ";
	cout << vosem << " ";
	cout << devyat << endl;

	
	return 0;
}