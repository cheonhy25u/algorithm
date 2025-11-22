#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int sum = 0; 
    int total; 
    cin >> total; 
    for(int i = 0; i < 9; i++){
        int temp; 
        cin >> temp; 
        sum += temp; 
    }
    cout << total - sum; 
}