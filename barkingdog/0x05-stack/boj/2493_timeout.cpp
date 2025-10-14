#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> S; 
    vector<int> result;
    int n; 
    cin >> n; 

    for(int i = 0; i < n ; i++){
        int x; cin >> x; 
        S.push(x);
    }
    for(int i = n; i > 0 ; i--){
        stack<int> cp = S; 
        int sender = cp.top();
        int a = 0; 
        cp.pop();
        while(!cp.empty() && cp.top() < sender){
            cp.pop();
            a++;
        }
        result.push_back(i-a-1);
        S.pop();
    }
    reverse(result.begin(), result.end());
    for (auto c : result){
        cout << c << " ";
    }
}