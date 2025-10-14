#include <bits/stdc++.h>
using namespace std;

int main(void){
    stack<int> S; 
    S.push(10); 
    S.push(20);
    S.push(30);
    cout << "Stack size is " << S.size() << '\n'; 
    if(S.empty()) cout << "S is empty\n";
    else cout << "S is not empty\n";
    S.pop();
    cout << "Stack top is " << S.top() << "\n";
    S.pop();
    cout << "Stack top is " << S.top() << "\n";
    S.pop();
    
}