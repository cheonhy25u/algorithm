#include <bits/stdc++.h>
using namespace std;

int main(){
   int N; 
   cin >> N;
   vector<int> A(N), res(N, -1);

   for(int i = 0; i < N; i++) cin >> A[i];

   stack<int> S; 

   for(int i = N-1; i>=0; i--){
    while(!S.empty() && S.top() <= A[i]){
        S.pop();
    }
    if(!S.empty()) res[i] = S.top();
    S.push(A[i]);
   }

   for(auto c : res) cout << c << " ";
}