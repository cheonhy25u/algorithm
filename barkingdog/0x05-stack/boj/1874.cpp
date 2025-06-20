#include <bits/stdc++.h>
using namespace std; 

int main(void){
    stack<int> S;
    int n; cin >> n; 
    int number=1;
    vector<char> result;
    int res = 1; 
    for (int i = 0; i < n; i++){
        int a; cin >> a; 
        
        while (number <= a) {
            S.push(number++);
            result.push_back('+');
        }
        if (!S.empty() && S.top() == a) {
            S.pop();
            result.push_back('-');
        } else {
            res = 0;
        }
    }
    if (res != 0) for(auto c : result) cout << c << "\n";
    else cout << "NO";
    return 0; 
}