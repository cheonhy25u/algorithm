#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int H, I, A, R, C; 
    cin >> H >> I >> A >> R >> C; 
    int a = H * I; 
    int b = A * R * C; 

    cout << a-b; 
}