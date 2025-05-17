#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt; 
    cin >> cnt;
    
    for(int i = 1; i < cnt; i++){
        //위 네 라인 출력
        for(int j = 0; j < i; j++){
            printf("*");
        }
        for(int j = 0; j < 2*(cnt-i); j++){
            printf(" ");
        }
        for(int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = 0; i < cnt; i++){
        //아래 다섯 라인 출력
        for(int j = i; j < cnt; j++){
            printf("*");
        }
        for(int j = 2; j < 2*(i+1); j++){
            printf(" ");
        }
        for(int j = i; j < cnt; j++){
            printf("*");
        }
        printf("\n");
    }
}