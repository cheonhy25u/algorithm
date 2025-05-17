#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, v; 
    int num[201]={};

    cin >> N;
    for(int i = 0; i < N; i++){
        int a; 
        cin >> a;
        num[a+100]++;
    }
    cin >> v;
    cout << num[v+100];
}