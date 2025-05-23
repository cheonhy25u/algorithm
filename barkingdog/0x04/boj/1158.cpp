#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int N, K; 
    cin >> N >> K;

    list<int> circle;
    for(int i = 0; i < N; i++) {
        circle.push_back(i+1);
    }

    auto p = circle.begin();
    vector<int> result; 
    while(!circle.empty()){
        for(int i = 1; i < K; i++){
            p++;
            if(p == circle.end()) p = circle.begin();
        }
        result.push_back(*p);
        auto tmp = p ;
        p++;
        if(p == circle.end()) p = circle.begin();

        circle.erase(tmp);
    }

    cout << "<";
    for (int i = 0; i < N; i++){
        cout << result[i];
        if(i != N-1) cout << ", ";
    }
    cout << ">";
}