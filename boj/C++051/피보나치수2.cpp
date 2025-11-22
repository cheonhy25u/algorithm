#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n; 
    cin >> n; 
    vector<long long> num ;
    num.push_back(0);
    num.push_back(1);
    for(int i = 2; i <= n; i++){ 
        num.push_back(num[i-1] + num[i-2]);
    }
    cout << num[n];
}