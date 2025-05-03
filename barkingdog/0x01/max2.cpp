#include <iostream>
#include <algorithm>
using namespace std;
int ret_max(int arr[]){
    return *max_element(arr,arr+4);
}

int main(){
    int arr[4];
    for (int i = 0; i < 4; i ++){
        cin >> arr[i];
    }
    cout << ret_max(arr);
}