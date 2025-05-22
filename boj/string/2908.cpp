#include <bits/stdc++.h>
using namespace std; 

int main(void){
    string A, B; 
    cin >> A >> B; 
    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());
    A>B?cout<<A:cout<<B;
}