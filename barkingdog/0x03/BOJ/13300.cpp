#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K; 
    cin >> N >> K; 
    int grade_f[7]={};
    int grade_m[7]={};
    for(int i = 0; i < N; i ++){
        int S, Y;
        cin >> S >> Y;
        if(S == 0) grade_f[Y]++;
        else grade_m[Y]++;
    }
    int sum = 0;
    for(int i = 1; i <= 6; i++){
        if(grade_f[i]%K==0) sum += grade_f[i]/K;
        else sum+= grade_f[i]/K+1;
        if(grade_m[i]%K==0) sum += grade_m[i]/K;
        else sum+= grade_m[i]/K+1;
    }
    cout << sum; 
}