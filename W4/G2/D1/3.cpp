#include <iostream>
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <ctype.h>

using namespace std;

int main(){
	
	int i = 0;

	for(;;){
		if(i > 100) break;
		i++;
		if(i % 2 == 0) continue;
		cout << i << " ";
	}
	
	return 0;
}