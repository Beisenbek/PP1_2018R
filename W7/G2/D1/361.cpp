#include <iostream>

using namespace std;


int main(){

  int n,m;

  cin >> n >> m;

  int a[n][m];

  int k = n * m;

  for(int i = 0; i < k; ++i){
    int r = i / m;
    int c = i % m;
    a[r][c] = r * c;
  }


  for(int i = 0; i < k; ++i){
    int r = i / m;
    int c = i % m;
    cout << a[r][c];
    if(c == m -1) cout << endl;
    else cout << " ";
  }
  
  return 0;
}
