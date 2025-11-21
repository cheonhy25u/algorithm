#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int N; 
    cin >> N; 

    for (int i = 2; N >= i * i; i++){
        while(N%i==0){
            cout << i << "\n"; 
            N /= i; 
        }
    }
    if(N > 1) cout << N; 
}