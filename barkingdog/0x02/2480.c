#include <stdio.h>

int main(){
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);
    max = a>b? a:b; 
    max = max > c? max : c;

    if(a == b){
        if (b == c) printf("%d", 10000 + a * 1000);
        else printf("%d", 1000 + a * 100);
    }else{
        if (b == c) printf("%d", 1000 + b * 100);
        else if(a == c) printf("%d", 1000 + a * 100);
        else printf("%d", max * 100);
    }

    return 0; 
}