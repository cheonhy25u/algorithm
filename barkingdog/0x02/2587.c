#include <stdio.h>

int main(){
    int list[5], sum = 0, mid, temp;

    for (int i = 0 ; i < 5; i ++){
        scanf("%d", &list[i]);
        sum += list[i];
    }
    


    for(int i = 0; i < 4; i ++){
        for (int j = 0; j < 4-i; j++){
            if(list[j]>list[j+1]){
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    mid = list[2];
    
    printf("%d\n%d", sum/5, mid);

    return 0; 
}