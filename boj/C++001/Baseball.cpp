#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T; 
    cin >> T; 
    for(int i = 0; i < T; i++){
        int y = 0, k = 0; 
        for(int j = 0; j < 9; j++){
            int a, b; 
            cin >> a >> b; 
            y += a; k += b; 
        }
        if(y > k) cout << "Yonsei\n";
        else if (k > y) cout << "Korea\n";
        else cout << "Draw\n";
    }
}