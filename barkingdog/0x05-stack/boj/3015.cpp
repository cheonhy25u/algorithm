#include <bits/stdc++.h>
using namespace std; 

int main(){
    int N; 
    cin >> N;
    
    stack<int> S; 
    int a;
    for (int i = 0; i < N; i++){
        cin >> a; 
        S.push(a);
    }
    
    int ans=1; 
    
    int pret; 
    
    for (int i = 0; i < N-1; i++){
        pret = S.top();
        S.pop(); 
        ans ++;
        if (S.top() < pret) ans ++; 
    }
    
    cout << ans; 
    
}