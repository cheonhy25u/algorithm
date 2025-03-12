#include <stdio.h>

int main(){
    int x[9];
    int max=0, maxNum=0;

    for (int i = 0; i < 9; i++){
        scanf("%d", &x[i]);
        max = max>x[i]?max:x[i];
        maxNum = max>x[i]?maxNum:i+1;
    }
    printf("%d\n%d", max, maxNum);
}