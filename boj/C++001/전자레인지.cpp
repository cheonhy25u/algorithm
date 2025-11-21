#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int T; 
    // A 300초 B 60초 C 10초 
    cin >> T; 

    int A = 300, B = 60, C = 10; 

    vector<int> timer; 
    timer.push_back(T / A);
    T %= A; 
    timer.push_back(T / B); 
    T %= B; 
    timer.push_back(T / C); 
    T %= C; 
    if(T != 0) cout << -1; 
    else {
        for(int i = 0; i < timer.size(); i++){
            cout << timer[i] << " ";
        }
    }
    
}