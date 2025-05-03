#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int height[9]={};
    int sum = 0;
    for(int i = 0; i < 9; i++){
        cin >> height[i];
        sum += height[i];
    }
    for(int i = 0; i < 9; i++){
        for(int j = i+1;  j < 9; j++){
            if(sum-height[i]-height[j]==100){
                height[i]=0;
                height[j]=0;
                goto EXIT;
            }
        }
    }
    EXIT:
        sort(height, height+9);
        for(int i = 2; i < 9; i++){
            cout << height[i] <<"\n";
        }
}