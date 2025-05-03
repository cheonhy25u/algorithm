#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int cnt = 0;
    cin >> cnt;

    string star;
    for(int i = 0; i < cnt; i++){
        star += "*";
        cout << star << "\n";
    }
}