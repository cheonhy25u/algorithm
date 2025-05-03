#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long int num[2];
    cin >> num[0] >> num[1];
    sort(num, num+2);
    long long int size;
    size = num[1]-num[0]-1;
    if(size<0) size = 0; 
    cout << size << "\n";
    for(long long int i = num[0]+1; i < num[1]; i++){
        cout << i << " ";
    }
}