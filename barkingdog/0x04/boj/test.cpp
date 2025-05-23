#include <bits/stdc++.h>
using namespace std; 

int main(void){
    string txt;
    txt = "a";
    
    auto p = txt.end(); 
    cout << *p << "\n";
    p--;
    cout << (p==txt.begin()) << "\n";
    cout << *p << "\n";
    p--;
    cout << (p==txt.begin()) << "\n";
    cout << *p << "\n";
    p--;
    cout << (p==txt.begin()) << "\n";
    /*
    txt.insert(p, 'e');
    cout << *p << "\n";
    p ++;
    cout << *p << "\n";
    for (auto c : txt) cout << c ;
    cout << "\n"; //abcde 

    p = txt.erase(p-1);
    cout << *p << "\n";

    for (auto c : txt) cout << c; 
    */
}