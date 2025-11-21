#include <bits/stdc++.h>
using namespace std; 

int main(void){
    unsigned int N, S; 
    S = 0; 
    cin >> N; 
    int a = 1; 
    int cnt = 0; 
    while(1){
        if(N >= a){
            cnt++; 
            N -= a; 
            a++;
        }else break; 
    }
    cout << cnt; 
}