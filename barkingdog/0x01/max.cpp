#include <iostream>
using namespace std;
int ret_max(int arr[]){
	int max = arr[0];
	for(int i = 1; i <= 3; i ++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}
int main(){
	int arr[4];
	for (int i = 0; i < 4; i++){
		cin >> arr[i];
	}
	cout << ret_max(arr);
}