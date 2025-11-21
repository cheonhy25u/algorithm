#include <bits/stdc++.h>
using namespace std; 

int main(void){
    string A, B; 
    cin >> A >> B; 

    int size = max(A.length(), B.length());
    A = string(size - A.length(), '0') + A; 
    B = string(size - B.length(), '0') + B; 

    int carry = 0; 
    string result; 
    for(int i = size-1; i >= 0; i--){
        int tempresult = A[i] - '0' + B[i] - '0' + carry;
        carry = tempresult / 10; 
        result += tempresult % 10 + '0'; 
    }

    if ( carry > 0 ) result += carry + '0'; 
    reverse(result.begin(), result.end());
    cout << result; 
}