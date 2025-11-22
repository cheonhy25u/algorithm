#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int T; 
    cin >> T; 
    for(int i = 0; i < T; i++){
        int sum = 0; 
        int s; 
        cin >> s; 
        sum += s; 
        int n; 
        cin >> n; 
        for(int j = 0; j < n; j++){
            int a, b; 
            cin >> a >> b; 
            sum += a * b; 
        }
        cout << sum <<"\n"; 
    }
}