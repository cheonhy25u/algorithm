#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n; 
    cin >> n; 
    int rem = 0; 
    for(int i = 0; i < n; i++){
        int s, a; 
        cin >> s >> a; 
        rem += a % s; 
    }
    cout << rem; 
}