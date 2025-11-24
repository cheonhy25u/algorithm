#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    int N; 
    cin >> N; 
    int cnt = 0;
    for(int i = 0; i < N; i++){
        int a; 
        cin >> a; 

        int incnt = 0; 

        for(int i = 1; i <= a; i++){
            if(a%i==0){
                incnt++;
            }
        }
        if (incnt==2) cnt++;
    }
    cout << cnt; 
}