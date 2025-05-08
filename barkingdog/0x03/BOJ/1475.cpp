#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int room;
    cin >> room;

    string num = to_string(room);
    int plastic[10] = {};
    for(auto c:num) plastic[c-'0']++;

    plastic[6] += plastic[9];
    plastic[6] = (plastic[6] + 1) / 2;
    plastic[9] = 0;


    int max_index = max_element(plastic, plastic+10)-plastic;
    int max = *max_element(plastic, plastic+10);

    cout << max;
}