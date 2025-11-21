#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int A, I; //수록된 곡 개수 A, 평균값 I
    cin >> A >> I; 

    int melody; 
    melody = A * (I - 1) + 1;

    cout << melody;
}