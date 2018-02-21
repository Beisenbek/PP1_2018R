
#include <iostream>

using namespace std;

int a[100][100];
int n,m;


void printA(){
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

void f(int val, int row, int col, int nrow, int ncol){
	if(val == n * m) return;
	else if(row == n){
		if(nrow == 1) f(val, 0, ncol, nrow, ncol + 1);
		else f(val, nrow, m-1, nrow + 1, m-1);
	}
	else if(col < 0)  f(val, 0, ncol, nrow, ncol + 1);
	else if(col == m) f(val, nrow, m - 1,nrow + 1, m - 1);
	else {
		a[row][col] = val;
		f(val + 1, row + 1,col - 1, nrow, ncol);
	}
}

int main(){

	cin >> n >> m;

	f(0,0,0,1,1);

	printA();

	return 0;
}