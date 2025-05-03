#include <bits/stdc++.h>
using namespace std;

int ys(int cnt, int time[]){
    int sum = 0; 
    for(int i = 0; i < cnt; i ++){
        sum += (time[i]/30+1)*10;
    }
    return sum;
}

int ms(int cnt, int time[]){
    int sum = 0; 
    for(int i = 0; i < cnt; i ++){
        sum +=(time[i]/60+1)*15;
    }
    return sum; 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int call_cnt, call_time[20];
    cin >> call_cnt;
    for(int i = 0; i < call_cnt; i++) cin >> call_time[i];
    int y = ys(call_cnt, call_time);
    int m = ms(call_cnt, call_time);
    if(y > m) cout << "M " << m;
    else if(m > y) cout << "Y " << y;
    else cout << "Y M " << y; 
}