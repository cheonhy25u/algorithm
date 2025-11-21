#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B, C, D; 
    cin >> A >> B >> C;
    cin >> D; 

    C = C + D; 
    if(C >= 60){
        B = B + C / 60; 
        C = C % 60; 
        if(B >= 60){
            A = A + B / 60; 
            B = B % 60; 
            if(A >= 24){
                A = A % 24; 
            }
        }
    }
    cout << A << " " << B << " " << C;
}