#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n; 
    cin >> n; 
    for(int i = 1; i <= n; i++){
        for(int a = 1; a <= i; a++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 1; i <n; i++){
        for(int a = n-i; a > 0; a--){
            cout << "*";
        }
        cout << "\n";
    }
}