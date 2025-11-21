#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T; 
    cin >> T; 
    for (int i = 0; i < T; i++){
        int a, b; 
        cin >> a >> b; 
        int first, second;
        first = min(a, b);
        second = max(a, b);
        while(1){
            if((second%first) == 0){
                cout << second << "\n"; 
                break;
            }
            else second += max(a, b); 
        }
    }
}