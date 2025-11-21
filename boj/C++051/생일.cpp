#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n; 
    cin >> n; 

    vector<pair<pair<int, int>, pair<int, string>>> st(n);

    for(int i = 0; i < n; i++){
        cin >> st[i].second.second >> st[i].second.first >> st[i].first.second >> st[i].first.first;
    }
    sort(st.begin(), st.end());

    cout << st[n-1].second.second << "\n" << st[0].second.second;
}