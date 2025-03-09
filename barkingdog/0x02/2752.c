#include <stdio.h>

int main(){
    int list[3];
    for (int i = 0; i < 3; i ++){
        scanf("%d", &list[i]);
    }
    int i, j, temp;
    for (int i = 0; i < 2; i++){
        for (j = 0; j < 2-i; j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j]=list[j+1];
                list[j+1]=temp;
            }
        }
    }
    printf("%d %d %d", list[0],list[1],list[2]);
    return 0;
}