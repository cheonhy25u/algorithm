#include <bits/stdc++.h>
using namespace std;

int main(void){
    string A, B, C;
    cin >> A >> B >> C; 
    cout << stoi(A)+stoi(B)-stoi(C)<<"\n";
    cout << stoi(A+B)-stoi(C);
}