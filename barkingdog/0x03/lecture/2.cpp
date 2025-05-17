#include <bits/stdc++.h>
using namespace std;

int freq[100];
int func2(int arr[], int N){
    for(int i = 0; i < N; i ++){
        int dif = 0;
        dif = 100 - arr[i];
        if(freq[dif]!=0) return 1;
        freq[arr[i]]++;
    }
    
    return 0; 
}

void test2(){
    cout << "****** func2 test ******\n";
    int arr[3][4] = {{1,52,48}, {50,42}, {4,13,63,87}};
    int n[3] = {3, 2, 4};
    int ans[3] = {1, 0, 1};
    for(int i = 0; i < 3; i++){
      int result = func2(arr[i], n[i]);
      cout << "TC #" << i << '\n';
      cout << "expected : " << ans[i] << " result : " << result;
      if(ans[i] == result) cout << " ... Correct!\n";
      else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
  }

  int main(void){
    test2();
  }