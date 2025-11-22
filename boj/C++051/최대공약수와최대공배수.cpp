#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int a, b; 
    cin >> a >> b; 

    int big, small; 
    big = max(a, b);
    small = min(a, b);

    for(int i = small; i > 0; i--){
        if(small % i == 0 && big % i == 0){cout << i << "\n"; break;}
    }
    for(int i = 1; ; i++){
        if(big * i % small == 0){
            cout << big * i << "\n";
            break;
        }
    }
}