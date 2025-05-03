#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt; 
    scanf("%d", &cnt);
    for(int i = 0; i < cnt; i++){
        for(int j = 0; j < cnt-i-1; j++){
            printf(" ");
        }
        for(int j = 0; j < i+1; j++){
            printf("*");
        }
        printf("\n");
    }
}