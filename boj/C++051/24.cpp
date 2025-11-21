#include <bits/stdc++.h>
using namespace std;

typedef struct{
    int hour;
    int minute;
    int second;
}Time;

Time setTime(string time){
    return Time{
        stoi(time.substr(0, 2)),
        stoi(time.substr(3, 2)),
        stoi(time.substr(6, 2))
    };
}

void printTime(Time time){
    string hour = to_string(time.hour);
    string minute = to_string(time.minute);
    string second = to_string(time.second);

    hour = hour.length() == 1 ? "0" + hour : hour;
    minute = minute.length() == 1 ? "0" + minute : minute;
    second = second.length() == 1 ? "0" + second : second;  

    cout << hour << ":" << minute << ":" << second << "\n";
}

int main(void){
    cin.tie(0);
    ios::sync_with_stdio(0); 

    string c_time, s_time;
    cin >> c_time >> s_time;

    Time c = setTime(c_time); 
    Time s = setTime(s_time);

    Time result; 
    result.second = s.second - c.second;

    if(result.second < 0){
        result.second += 60;
        s.minute --; // minute borrow
    }

    result.minute = s.minute - c.minute;
    if(result.minute < 0){
        result.minute += 60;
        s.hour --; // hour borrow
    }
    result.hour = s.hour - c.hour;
    if(result.hour < 0){
        result.hour += 24;
    }
    printTime(result);
}