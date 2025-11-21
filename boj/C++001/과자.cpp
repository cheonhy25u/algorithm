#include <bits/stdc++.h>
using namespace std;

int main(void){
    int K, N, M; 
    cin >> K >> N >> M; 

    int sum = K * N; 
    if(sum > M) cout << sum - M; 
    else cout << 0;
}