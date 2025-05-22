#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a; 
        cin >> a; 
     
        string b = a;
        reverse(b.begin(),b.end());
        if(a == b) cout << "1\n";
        else cout << "0\n";    
}