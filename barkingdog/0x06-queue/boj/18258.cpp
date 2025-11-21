#include <bits/stdc++.h>
using namespace std; 

int main(void){
    queue<int> Q; 
    int cnt; 
    cin >> cnt; 
    cin.ignore();
    for (int i = 0; i < cnt; i++){
        string cmd; 
        cin >> cmd; 
        if (cmd == "push"){
            int num; 
            cin >> num; 
            Q.push(num);
        }else if (cmd == "pop"){
            if(Q.empty()) cout << "-1\n";
            else {
                cout << Q.front() <<"\n";
                Q.pop();
            }
        }else if (cmd == "size"){
            cout << Q.size() <<"\n";
        }else if (cmd == "empty"){
            cout << (Q.empty()?1:0) << "\n";
        }else if (cmd == "front"){
            cout << (Q.empty()?-1:Q.front()) << "\n";
        }else if (cmd == "back"){
            cout << (Q.empty()?-1:Q.back()) << "\n";
        }
    }
}