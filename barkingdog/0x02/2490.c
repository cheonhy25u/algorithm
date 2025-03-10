#include <stdio.h>

int main(){
    
    for (int j = 0; j < 3; j++){
        int count = 0; 
        int yut[4];
        for (int i = 0 ; i < 4; i ++){
            scanf("%d", &yut[i]);
            if(yut[i]==0) count++;
        }

        switch(count){
            case 0 : 
                printf("E\n");
                break;
            case 1 :
                printf("A\n");
                break;
            case 2 :
                printf("B\n");
                break;
            case 3 :
                printf("C\n");
                break;
            case 4 : 
                printf("D\n");
                break;
        }
    }
}