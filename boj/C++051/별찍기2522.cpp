#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n; 
    cin >> n; 
    for(int i = 1; i <= n; i++){
        for(int j = n-i; j > 0; j--){
            cout << " ";
        }
        for(int a = 1; a <= i; a++){
            cout << "*";
        }
        cout << "\n";
    }
    for(int i = 1; i <n; i++){
        for(int a = 1; a <=i; a++){
            cout << " ";
        }
        for(int j = n-i; j > 0; j--){
            cout << "*";
        }
        cout << "\n";
    }
}