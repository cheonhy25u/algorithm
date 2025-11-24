#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n, k; 
    cin >> n >> k; 
    vector<int> num; 
    for(int i = 1; i <= n; i++){
        if(n % i == 0) num.push_back(i);
    }
    if(num.size() < k) cout << 0;
    else cout << num[k-1];
}