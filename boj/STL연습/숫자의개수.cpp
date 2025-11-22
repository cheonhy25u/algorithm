#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a, b, c; 
    int arr[10]; 
    cin >> a >> b >> c; 
    int result = a * b * c; 
    
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }

    while(result != 0){
        arr[result%10]++; 
        result /= 10; 
    }
    for(int i = 0; i < 10; i++){
        cout << arr[i] << "\n";
    }
}