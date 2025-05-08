#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        for(int j = 1; j < cnt-i; j++){
            printf(" ");
        }
        printf("*");
        for(int j = 0; j < 2*i; j++){
            printf("*");
        }
        printf("\n");
    }
}