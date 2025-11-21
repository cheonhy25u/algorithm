#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T; 
    cin >> T; 
    for(int i = 0; i < T; i++){
        int N; 
        cin >> N; 
        int mx = 0; 
        string best; 
        for(int j = 0; j < N; j++){
            string s; int x;
            cin >> s >> x; 
            if(x > mx) {
                mx = x;
                best = s; 
            }
        }
        cout << best << "\n";
    }
}