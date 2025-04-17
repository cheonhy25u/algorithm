#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    cout << "1번 문제 두 자연수를 공백을 사이에 두고 입력하세요 \n";
    int a, b;
	cin >> a >> b;
	cout << a + b <<"\n"; 
    cout <<"2번 문제 4칸짜리 배열을 입력하세요\n";
    int arr[4];
    for (int i = 0; i < 4; i++){
        cin >> arr[i];
    }
    cout << *max_element(arr, arr+4);
}