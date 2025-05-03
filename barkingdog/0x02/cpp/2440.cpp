#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    for(int i = cnt; i > 0; i--){
        for(int j = i; j > 0; j--){
            cout << "*";
        }   
        cout << "\n";
    }
}