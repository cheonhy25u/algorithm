#include <bits/stdc++.h>
using namespace std; 
int main(void){
    int T; 
    cin >> T; 
    for(int i = 0; i < T; i++){
        int c; int v; 
        cin >> c >> v; 
        cout << "You get " <<c / v << " piece(s) and your dad gets " << c % v << " piece(s).\n"; 
    }
}