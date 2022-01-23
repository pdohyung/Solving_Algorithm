#include <bits/stdc++.h>
using namespace std;

int main(){
    int cnt = 0;
    string s;
    string res;
    cin >> s;
    res += s[0];
    for(auto c : s){
        if(c == '-') res += s[cnt+1];
        cnt++;
    }
    cout << res;
    return 0;
}