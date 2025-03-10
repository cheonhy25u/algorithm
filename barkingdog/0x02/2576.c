#include <stdio.h>

int main(){
    int list[7];
    int sum = 0;
    int least = 100;
    for(int i = 0 ; i < 7; i++){
        scanf("%d", &list[i]);
    }
    for (int i = 0; i < 7; i++){
        if(list[i]%2== 1) {
            sum+=list[i];
            least = list[i]<least? list[i]:least;
        }
    }
    if(sum == 0) printf("-1");
    else printf("%d\n%d", sum, least);
    return 0; 
}