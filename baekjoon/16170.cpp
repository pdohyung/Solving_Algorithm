#include <bits/stdc++.h>
using namespace std;

int main(){
    time_t timer = time(NULL);
    struct tm* t = localtime(&timer);
    if(((t->tm_hour) - 9) < 0){
        printf("%d\n", t->tm_year + 1900);
        printf("%d\n", t->tm_mon + 1);
        printf("%d\n", t->tm_mday);
    }
    else{
    printf("%d\n", t->tm_year + 1900);
    printf("%d\n", t->tm_mon + 1);
    printf("%d\n", t->tm_mday);
    }
    
    return 0;
}