#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int T; 
    cin >> T; 
    
    for(int i = 0; i < T; i++){
        int n; 
        cin >> n; 
        int a = 0;
        float b = 0;
        for(int j = 0; j < n; j++){
            int temp; 
            float temp2;
            cin >> temp >> temp2; 
            a += temp; b += temp2 * temp; 
        }
        cout << fixed; 
        cout.precision(1);
        cout << a << " "<< b/a << "\n"; 
    }
}