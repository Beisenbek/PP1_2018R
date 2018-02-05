#include <iostream>

using namespace std;

int main(){
    
    int x;
    cin >> x;
    
    int dividers[x];
    int index = 0;
    
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            dividers[index] = i;
            index++;
        }
    }
    
    for(int i = 0; i < index; ++i){
        cout << dividers[i] << endl;
    }
    
    return 0;
}
