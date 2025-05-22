#include <bits/stdc++.h>
using namespace std;

int main(void){
    int num;

    cin >> num;

    for(int i = 0; i < num; i++){
        int repeat;
        string S;
        cin >> repeat >> S;
        string result = "";
        for(auto c : S){
            for(int j = 0; j < repeat; j++) cout << c;
        }
        cout << "\n";
    }
}