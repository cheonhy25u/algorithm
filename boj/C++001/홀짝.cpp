#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; 
    int even, odd; 
    even = 0; odd = 0; 
    cin >> N; 
    while(N--){
        char c; cin >> c; 
        if((c-'0')%2==1) odd++;
        else even++;
    }
    if(odd > even) cout << 1; 
    else if (odd < even) cout << 0; 
    else cout << -1; 
}
