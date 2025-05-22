#include <bits/stdc++.h>
using namespace std;

int main(void){
    while (true){
        int num[3]; 
        cin >> num[0] >> num[1] >> num[2];
        sort(num, num+3);
        if (num[0]==0 && num[2]==0) break; 
        (num[0]*num[0])+(num[1]*num[1])==(num[2]*num[2]) ? cout << "right\n": cout << "wrong\n";
    }
}