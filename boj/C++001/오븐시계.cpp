#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c; 
    cin >> a >> b ; 
    cin >> c; 

    int fin1, fin2; 
    fin1 = a; 
    fin2 = b + c; 
    if (fin2 >=60){
        fin1 = a + fin2 / 60; 
        fin2 = fin2 % 60; 
        if(fin1 >=24){
            fin1 = fin1 % 24; 
        }
    }
    cout << fin1 << " " << fin2;
}