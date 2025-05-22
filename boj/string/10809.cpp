#include <bits/stdc++.h>
using namespace std; 

int main(void){
    string S; 
    cin >> S; 
    int alp[26]={};
    for( int i = 0; i < 26; i++) alp[i]=-1;
    for(int i = 0; i < size(S); i++){
        if(alp[S[i]-'a']==-1) alp[S[i]-'a']=i;
    }
    for(auto c:alp) cout << c << " ";
}