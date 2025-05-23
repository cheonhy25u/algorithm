#include <bits/stdc++.h>
using namespace std; 

int main(void){
    string init;
    int cnt;
    
    cin >> init >> cnt;
    cin.ignore();

    list<char> txt(init.begin(), init.end());
    auto p = txt.end(); 
    
    for(int i = 0; i < cnt; i++){
        string cmd; 
        getline(cin, cmd);

        if(cmd[0] == 'L'){
            if(p != txt.begin()) p--;
        }
        else if(cmd[0] == 'D'){
            if (p != txt.end()) p++;
        }
        else if(cmd[0] == 'B'){
            if (p != txt.begin()) {
                auto temp = p;
                --temp;
                p = txt.erase(temp);
            }
        }
        else if(cmd[0] == 'P'){
            txt.insert(p, cmd[2]);
        }
    }

    for (auto c : txt) cout << c; 
}
