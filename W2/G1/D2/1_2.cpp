#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;
	int s = 0;
	int k = 8;

	for(int i = 1; i <= 4; ++i){
		s = s + k*(n % 2);
		n = n / 2;
		k = k / 2; 
	}

	cout << s << endl;


	return 0;
}