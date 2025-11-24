#include <bits/stdc++.h>
using namespace std;

int main(void){
    int M, N; 
    cin >> M >> N; 
    vector<int> v;
    for(int i = M; i <= N; i++){
        int cnt = 0; 
        for(int j = 1; j <= i; j++){
            if(i%j==0) cnt++;
        }
        if(cnt == 2){
            v.push_back(i);
        }
    }
    int sum = 0; 
    for(int x : v){
        sum += x; 
    }
    if (v.size() == 0) cout << "-1";
    else cout << sum << "\n" << v[0];
}