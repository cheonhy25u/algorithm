#include <bits/stdc++.h>
using namespace std;

void reverse(int a, int b, int card[]){
    int tmp[20]={};
    int x = 0;
    for(int i = b-1; i >a-2; i--){
        tmp[x]=card[i];
        x++;
    }
    x = 0;
    for(int i = a-1; i < b; i++){
        card[i] = tmp[x];
        x++;
    }
}

int main(){
    int card[20];
    for(int i = 1; i < 21; i++) card[i-1] = i;
    int a, b; 
    for(int i = 0; i < 10; i++){
        cin >> a >> b; 
        reverse(a, b, card); 
    }
    for(int i = 0; i < 20; i++) {
        cout << card[i] << " ";
    }
}