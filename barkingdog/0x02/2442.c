#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        for(int a = n; a > i+1; a--){
            printf(" ");
        }
        for(int a = 0; a < 2*(i+1)-1; a++){
            printf("*");
        }
        printf(" \n");
    }
}