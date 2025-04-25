#include <stdio.h>

int main(){
    long long int a, b, size, first, second;
    scanf("%lld %lld", &a, &b);

    first = a>b?a:b; //first에 더 큰 값 있음!!
    second = a>b?b:a;

    size = first-second-1;
    if(size < 0) size = 0; 
    printf("%lld\n", size);

    for(long long int i = 1; i < size+1; i++){
        printf("%lld ", second+i);
    }
}