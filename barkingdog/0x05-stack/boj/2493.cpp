#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    stack <pair <int, int> > S; 
    vector <int> res;
    for (int i = 1; i <= n; i++){
        int h; 
        cin >> h; 
        while(!S.empty() && S.top().first < h){
            S.pop(); //지금 들어오는 탑보다 낮은 건 다 비워도 됨 걍
        }
        int answer; 
        answer = S.empty()? 0 : S.top().second;
        res.push_back(answer);
        S.push({h,i});
    }
    for(auto c : res) cout << c << " ";
    return 0;
}
