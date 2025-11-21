#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; 
    cin >> n; 
    int c = 100, s = 100; 
    for(int i = 0; i < n; i++){
        int a, b; 
        cin >> a >> b; 
        if(a > b) s -= a; 
        else if (a < b) c -= b; 
    }
    cout << c << "\n" << s; 
}