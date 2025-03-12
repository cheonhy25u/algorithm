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
    for(int i = 1; i < n; i++){
        for(int a = n; a > i+1; a--){
            printf(" ");
        }
        for(int a = 0; a < 2*(i+1)-1; a++){
            printf("*");
        }
        printf(" \n");
    }
}