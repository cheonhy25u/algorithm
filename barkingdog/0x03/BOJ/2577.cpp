#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c; 
    cin >> a >> b >> c; 

    int result = a * b * c; 
    string res = to_string(result);
    int count [10] = {};
    for(auto c : res) count[c-'0']++;
    for (auto c : count) cout << c <<"\n"; 
}