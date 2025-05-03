#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++){
        for (int a = 1; a < n-i+1; a++){
            printf(" ");
        }
        for(int a = 1; a < i+1; a++){
            printf("*");
        }
        printf("\n");
    }
}