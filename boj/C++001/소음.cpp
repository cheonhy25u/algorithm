#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    string first, second; 
    char chr; 
    cin >> first >> chr >> second; 
    
    if(chr == '*'){
        cout << first; 
        for(int i = 0; i < size(second)-1; i++) cout << '0';
    }
    if(chr == '+'){
        if(size(first)==size(second)){
            cout << "2"; 
            for(int i = 0; i < size(first)-1; i++){
                cout << "0"; 
            }
        }else{
            int a = max(size(first), size(second));
            int b = min(size(first), size(second));
            for(int i = a; i > 0; i--){
                if(i == a | i == b) cout << '1';
                else cout << '0';
            }
        }
    }
}