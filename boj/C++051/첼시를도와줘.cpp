#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0); 

    int n; 
    cin >> n; 

    for(int i = 0; i < n; i++){
        int p; 
        cin >> p; 
        int max = 0; 
        string name; 
        for(int j = 0; j < p; j++){
            int price; 
            string temp_name;
            cin >> price >> temp_name; 
            if (price > max){
                max = price; 
                name = temp_name; 
            }
        }
        cout << name << "\n"; 
    }
}