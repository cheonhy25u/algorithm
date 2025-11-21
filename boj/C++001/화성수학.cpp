#include <bits/stdc++.h>
using namespace std; 

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int T; 
    cin >> T; 

    float num; 
    char oper;

    for (int i = 0; i < T; i++){
        num = 0; 
        cin >> num; 
        while(1){
            cin.get(oper);
            if (oper == '\n') break; 
            if(oper == '@') num *= 3; 
            if(oper == '%') num += 5; 
            if(oper == '#') num -= 7;
        }
        cout << setprecision(2) << fixed;
        cout << num << "\n"; 
    }

}