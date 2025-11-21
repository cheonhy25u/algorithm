#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int M, N; 
    cin >> M >> N; 

    vector<int> comp; 

    for(int i = M; i <= N; i++){
        int r = sqrt(i);
        if(r * r == i) comp.push_back(i);
    }

    if(comp.empty()){
        cout << -1; 
        return 0; 
    }

    int sum = 0;
    for(int x : comp) sum += x; 
    
    sort(comp.begin(), comp.end());
    cout << sum << "\n" << comp[0]; 
}