#include <bits/stdc++.h>
using namespace std;

int main(void){
    int cnt; 
    cin >> cnt; 
    cin.ignore();
    while(cnt--){
        string input;
        getline(cin, input);

        list <char> result;
        auto p = result.begin();
        for(auto c : input){
            if (c == '<' && (p != result.begin())) {
                p--;
            }
            else if (c == '>' && (p != result.end())) {
                p++;
            }
            else if (c == '-') {
                if (p != result.begin()) {
                    auto temp = --p;
                    p = result.erase(temp);
                }
            }
            else if (c != '<' && c != '>' && c != '-'){
                result.insert(p, c);
            }
        }
        for (auto c : result) cout << c; 
        cout <<"\n";
    }
}