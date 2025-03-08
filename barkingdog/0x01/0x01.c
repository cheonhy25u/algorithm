#include <stdio.h>

int func1(int N){
    int sum = 0;
    for (int i = 1; i <= N; i++){
        if (i % 3 == 0 | i % 5 == 0) sum += i; 
    }
    return sum;
}

int func2(int arr[], int N){
    for (int i = 0; i < N; i ++){
        for(int j = 1; j < N; j++){
            if(i!=j){
                if(arr[i]+arr[j]==100) return 1;
            }
        }
    }
    return 0;
}

int func3(int N){
    for(int i = 1; i * i <= N; i++){
        if(i*i==N) return 1;
    }
    return 0; 
}

int func4(int N){
    int i = 1;
    while(i*2 <= N) i*=2;
    return i; 
}

void test1(){
    printf("***** func1 test *****\n");
    int n[3] = {16, 34567, 27639};
    int ans[3] = {60, 278812814, 178254968};
    for(int i = 0; i < 3; i ++){
        int result = func1(n[i]);
        printf("test case #%d \n", i);
        printf("expected : %d result : %d", ans[i], result);
        if(ans[i]==result) printf(" ... Correct!\n");
        else printf(" ... Wrong!\n");
    }
}

void test2(){
    printf("***** func2 test *****\n");
    int arr[3][4] = {{1, 52, 48}, {50, 42}, {4, 13, 63, 87}};
    int n[3] = {3, 2, 4};
    int ans[3] = {1, 0, 1};
    for(int i = 0; i < 3; i ++){
        int result = func2(arr[i], n[i]);
        printf("test case #%d \n", i);
        printf("expected : %d result : %d", ans[i], result);
        if(ans[i]==result) printf(" ... Correct!\n");
        else printf(" ... Wrong!\n");
    }
}

void test3(){
    printf("***** func3 test *****\n");
    int n[3] = {9, 693953651, 756580036};
    int ans[3] = {1, 0, 1};
    for(int i = 0; i < 3; i ++){
        int result = func3(n[i]);
        printf("test case #%d \n", i);
        printf("expected : %d result : %d", ans[i], result);
        if(ans[i]==result) printf(" ... Correct!\n");
        else printf(" ... Wrong!\n");
    }
}

void test4(){
    printf("***** func3 test *****\n");
    int n[3] = {5, 97615282, 1024};
    int ans[3] = {4,67108864, 1024};
    for(int i = 0; i < 3; i ++){
        int result = func4(n[i]);
        printf("test case #%d \n", i);
        printf("expected : %d result : %d", ans[i], result);
        if(ans[i]==result) printf(" ... Correct!\n");
        else printf(" ... Wrong!\n");
    }
}

int main(void){
    test1();
    test2(); 
    test3();
    test4();
}