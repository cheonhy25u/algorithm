#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int height[9], sum=0;
    for (int i = 0; i < 9; i++){
        scanf("%d", &height[i]);
        sum += height[i];
    }

    for(int i = 0; i < 8; i++){
        for (int j = 0; j < 8-i; j++){
            if(height[j]>height[j+1]){
                swap(&height[j], &height[j+1]);
            }
        }
    }

    for(int i = 0; i < 9; i++){
        for (int j = i+1; j < 9; j++){
            if(sum - height[i] - height[j] == 100){
                height[i] = 0; 
                height[j] = 0;
                goto end;
            }
        }
    }
    end : 
    for(int i = 0; i < 9; i ++){
        if(height[i]!= 0){printf("%d\n", height[i]);}
    }
    
}