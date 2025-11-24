#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int n; 
    cin >> n; 

    vector<int> pi; 
    pi.push_back(0);
    pi.push_back(1);

    for(int i = 2; i <= n+1; i++){
        pi.push_back(pi[i-1] + pi[i-2]);
    }

    cout << pi[n];
}