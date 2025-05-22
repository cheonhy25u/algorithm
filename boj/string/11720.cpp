#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int cnt, sum=0; 
    string input; 

    cin >> cnt >> input; 

    for (int i = 0; i < cnt; i++){
        sum+= input[i] -'0'; 
    }
    cout << sum; 
}