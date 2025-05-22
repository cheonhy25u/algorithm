#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a; 
    while(true){
        a="";
        cin >> a; 
        if (a == "0") break; 
     
        string b = a;
        reverse(b.begin(),b.end());
        if(a == b) cout << "yes\n";
        else cout << "no\n";    
        
    }
}