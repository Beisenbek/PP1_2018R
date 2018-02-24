#include<iostream>

using namespace std;

int main(){

    int n,m;
    cin >> n >> m;
    int a[n][m];

    int super[n];
    int sum[n];

    for(int i = 0; i < n; ++i){
        super[i] = -1;
        sum[i] = 0;
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            sum[i] = sum[i] + a[i][j];
            if(super[i] < a[i][j]){
                super[i] = a[i][j];
            }
        }
    }
    
    int best = super[0];
    int index = 0;

    for(int i = 1; i < n; ++i){
       if(best < super[i]){
           best = super[i];
           index = i;
       }else if(best == super[i] && sum[i] > sum[index]){
           best = super[i];
           index = i;
       }
    }

    cout << index << endl;

    return 0;
}