#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N; 
    cin >> N; 
    string pw;
    for (int i = 0; i < N; i++){
        cin >> pw; 
        if(pw.length() >= 6 && pw.length() <=9) cout << "yes\n"; 
        else cout << "no\n";
    }
}