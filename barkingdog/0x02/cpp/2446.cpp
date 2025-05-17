#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++){
        for(int j = 0; j < i; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*(cnt-i)-1; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = cnt-1; i > 0; i--){
        for(int j = 0; j < i-1; j++){
            printf(" ");
        }
        for(int j = 0; j < 2*(cnt-i)+1; j++){
            printf("*");
        }
        printf("\n");
    }

}