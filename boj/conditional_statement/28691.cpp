#include <bits/stdc++.h>
using namespace std;

int main(){
    string init; 
    cin >> init; 
    if (init == "M") cout << "MatKor";
    else if (init == "W") cout << "WiCys"; 
    else if (init == "C") cout << "CyKor";
    else if (init == "A") cout << "AlKor";
    else cout << "$clear"; 
    return 0; 
}