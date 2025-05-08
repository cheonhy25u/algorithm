#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int len = size(s);
    int count[26];
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++) count[i] = 0;

    for(int i = 0; i < len; i++){
        for(int j = 0; j < 26; j++){
            if(s[i]==alphabet[j]) count[j]++;
        }
    }
    for(int i = 0; i < 26; i++){
        cout << count[i] << ' ';
    }
}