#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num; 
    cin >> num;
    int result = 1;
    for(int i = num; i > 0; i--){
        result *= i; 
    }
    cout << result; 
}