#include <bits/stdc++.h>

int main(void){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    std::cout << t->tm_year + 1900 << "-" << t->tm_mon + 1 << "-" << t->tm_mday ; 
}