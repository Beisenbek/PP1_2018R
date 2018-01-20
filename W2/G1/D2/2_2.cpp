#include <iostream>

using namespace std;

int main(){

	int n;
	cin >> n;

	int cnt = 0;

	for(int i = 1; i <= 6; ++i){
		cnt += (1 - n % 2);
	}

	cout << cnt;

	return 0;
}