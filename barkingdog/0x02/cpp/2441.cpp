#include <bits/stdc++.h>
using namespace std; 

int main(){
    int cnt; 
    scanf("%d", &cnt);
    for(int i = cnt; i > 0; i --){
        for(int j = cnt-i; j>0; j--){
            printf(" ");
        }
        for(int j = i; j > 0; j--){
            printf("*");
        }
        printf("\n");
    }
}