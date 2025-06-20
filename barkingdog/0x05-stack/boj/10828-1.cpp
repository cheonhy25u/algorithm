#include <bits/stdc++.h>
using namespace std; 

int main(){
    stack<int> S; 
    int cnt; 
    cin >> cnt;
    cin.ignore(); 
    for (int i = 0; i < cnt; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int x; 
            cin >> x; 
            S.push(x);
        }else if(cmd == "pop"){
            if(S.empty()) cout << "-1" <<"\n";
            else {
                cout << S.top() <<"\n";
                S.pop();
            }
        }else if(cmd == "size"){
            cout << S.size() <<"\n";
        }else if (cmd == "empty"){
            cout << S.empty() <<"\n";
        }else if (cmd == "top"){
            if(S.empty()) cout << "-1" <<"\n";
            else cout << S.top() << "\n";
        }
    }
}