#include <stdio.h>

int main(){
    int T; 
    scanf("%d", &T);
    int a, b;
    while(T>0){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
        T--;
    }
}