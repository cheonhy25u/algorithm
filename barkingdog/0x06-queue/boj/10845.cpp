#include <bits/stdc++.h>
using namespace std; 

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    queue<int> Q; 
    int num; 
    cin >> num; 
    cin.ignore();
    for(int i = 0; i < num; i++){
        string cmd; 
        cin >> cmd; 
        if (cmd == "push"){
            int a; 
            cin >> a; 
            Q.push(a);   
        }else if(cmd == "pop"){
            if(Q.empty()) cout << "-1\n";
            else {
                cout << Q.front() << "\n"; 
                Q.pop();
            }
        }else if (cmd == "size"){
            cout << Q.size() << "\n"; 
        }else if (cmd == "empty"){
            cout << (Q.empty()?1:0) << "\n"; 
        }else if (cmd == "front"){
            cout << (Q.empty()? -1:Q.front()) << "\n"; 
        }else{
            cout << (Q.empty()? -1:Q.back()) << "\n"; 
        }
    }
}