#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x){
    dat[pos++] = x;
}
void pop(){
    pos--;
}

int top(){
   return dat[pos-1]; 
}

int main(void){
    int cnt; 
    cin >> cnt; 
    for(int i = 0; i < cnt; i ++){
        int c = 0; 
        cin >> c; 
        if(c != 0){
            push(c);
        }else{
            pop();
        }
    }
    int sum = 0; 
    for(int i = 0; i < pos; i++){
        sum += dat[i];
    }
    cout << sum;
}