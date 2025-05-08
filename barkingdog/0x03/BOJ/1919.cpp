#include <bits/stdc++.h>
using namespace std; 

int main(){
    string s1, s2; 
    cin >> s1 >> s2; 

    int arr1[26] = {};
    int arr2[26] = {};
    for (auto c:s1) arr1[c-'a']++;
    for (auto c:s2) arr2[c-'a']++;

    int sum = 0; 
    for (int i = 0; i < 26; i++){
        if (arr1[i]!=arr2[i]){
            arr1[i]>arr2[i]?sum+=arr1[i]-arr2[i]:sum+=arr2[i]-arr1[i];
        }
    }
    cout << sum; 
}