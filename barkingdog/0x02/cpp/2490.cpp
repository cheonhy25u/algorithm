#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 0; i < 3; i ++){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int sum = 0;
        sum = a+b+c+d;
        switch(sum){
            case 4 : cout << "E\n"; break;
            case 3 : cout << "A\n"; break;
            case 2 : cout << "B\n"; break;
            case 1 : cout << "C\n"; break;
            case 0 : cout << "D\n"; break;
        }  
    }
}