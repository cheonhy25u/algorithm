#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, sum = 0, min = 100;
    for (int i = 0; i < 7; i++){
        cin >> a; 
        if(a%2==1){
            sum += a; 
            if(min > a){
                min = a;
            }
        }
    }
    if (sum > 0){
    cout << sum << "\n" << min;
    }
    else{
        cout << -1;
    }
}