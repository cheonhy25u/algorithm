#include <stdio.h>

int main(){
    int a[10], b[10];
    int card[20];
    for (int i = 0; i < 20; i++){
        card[i] = i+1;
    }

    for(int i = 0; i < 10; i ++){
        scanf("%d %d", &a[i], &b[i]);
        int x, y;
        x = a[i]-1; y = b[i]-1;

        while(x<y){
            int temp;
            temp = card[x];
            card[x]=card[y];
            card[y]=temp;
            x++; y--;
        }
    }
    for (int i = 0; i < 20; i ++){
        printf("%d ", card[i]);
    }
}