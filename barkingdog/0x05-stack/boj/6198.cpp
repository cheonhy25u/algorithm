#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    stack<long long int> building;
    long long int result = 0;
    for(int i = 0; i < N; i++){
        int h; cin >> h; 
        if(building.empty()) building.push(h);

        while(!building.empty() && building.top() <= h){
            building.pop();
        }
        result += building.size();

        building.push(h);
    }
    cout << result;
}