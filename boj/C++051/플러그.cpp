#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int N; 
    cin >> N; 
    int sum = 0; 
    for(int i = 0; i < N; i++){
        int a; 
        cin >> a; 
        sum += a; 
    }
    cout << sum - (N - 1); 
}