#include <bits/stdc++.h>
using namespace std;

int main(void){
    string S;
    getline(cin, S);
    
    stringstream ss(S);

    string word; 
    int result = 0; 

    while (ss >> word) result ++;

    cout << result; 
}