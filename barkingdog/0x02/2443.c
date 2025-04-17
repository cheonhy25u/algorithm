#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        for(int a = n; a > i; a--){
            printf(" ");
        }
        for(int a = 1; a < 2*i; a++){
            printf("*");
        }
        printf(" \n");
    }
}