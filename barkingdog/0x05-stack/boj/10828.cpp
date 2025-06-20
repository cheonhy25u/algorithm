#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos] = x;
    pos++;
}
void pop(){
    if(pos==0) cout << -1 <<"\n";
    else {
        cout << dat[pos-1] <<"\n";
        pos--;
    }
}
void size(){
    cout << pos << "\n";
}
int empty(){
    if(pos == 0) return 1;
    else return 0; 
}
void top(){
    if(pos == 0) cout << -1 << "\n"; 
    else cout << dat[pos-1] << "\n";
}



int main(){
    int cnt; 
    cin >> cnt; 
    cin.ignore();
    for(int i = 0; i < cnt; i++){
        string cmd;
        cin >> cmd;
        if(cmd == "push"){
            int x; 
            cin >> x; 
            push(x);
        }else if(cmd == "pop"){
            pop();
        }else if(cmd == "size"){
            size();
        }else if (cmd == "empty"){
            cout << empty() <<"\n";
        }else if (cmd == "top"){
            if(empty()) cout << "-1" <<"\n";
            else top();
        }
    }

    return 0; 
}


