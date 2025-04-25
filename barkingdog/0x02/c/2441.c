#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    for (int j = 0; j < n; j ++){
        for(int i = 0; i < j; i++){
            printf(" ");
        }
        for (int i = n; i > j; i--){
            printf("*");
        }
    printf("\n");
    }
}