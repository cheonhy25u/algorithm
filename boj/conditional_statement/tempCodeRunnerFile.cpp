#include <bits/stdc++.h>
using namespace std;

int main(void){
    while (true){
        int num[3]; 
        cin >> num[0] >> num[1] >> num[2];
        sort(num, num+3);
        (num[0]*num[0])+(num[1]*num[1])==(num[2]
*num[2]) ? cout << "right": cout << "wrong";
    }
}