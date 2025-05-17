#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt; 
    cin >> cnt; 
    for(int i = cnt; i > 0; i--){
        for(int j = 0; j < cnt-i; j++){
            printf(" ");
        }
        for(int j = 2*i-1; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
}