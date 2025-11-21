#include <bits/stdc++.h>
using namespace std;

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);
    long long int n, m; 
    cin >> n >> m; 
    long long int a = max(n, m);
    long long int b = min(n, m);
    cout << a-b; 
}