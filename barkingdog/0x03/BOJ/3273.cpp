#include <bits/stdc++.h>
using namespace std; 

int main(){
    int n, x, num;

    //입력받기 
    cin >> n; 
    vector<int> array(n) ;
    for (int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin >> x; 

    sort(array.begin(), array.end());
    int i = 0, j = n-1, cnt = 0;
    
    while(i < j){
        int sum = array[i]+array[j];
        if(sum==x){
            cnt++; i++, j--;
        }else if (sum < x) i++;
        else j--;
    }
    cout << cnt;
}