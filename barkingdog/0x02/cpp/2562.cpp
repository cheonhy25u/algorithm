#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[9]={};

    for(int i = 0; i < 9; i ++){
        cin >> num[i];
    }

    int maxVal = *max_element(num, num+9);
    int maxIndex = max_element(num, num+9) - num + 1;
    cout << maxVal << "\n" << maxIndex;
}