#include <bits/stdc++.h>
using namespace std; 

int main(void){
    int cnt; 
    cin >> cnt; 

    for (int i = 0; i < cnt; i++){
        string input; 
        cin >> input; 
        cout << input[0] << input[size(input)-1] <<"\n";
    }
}