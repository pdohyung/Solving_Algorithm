#include <bits/stdc++.h>
using namespace std;

int main(){
    string s[8];
    int cnt, res = 0;
    for(int i = 0; i < 8; i++) cin >> s[i];
    for(int i = 0; i < 8; i++){
        if(i % 2 == 0) cnt = 0;
        else cnt = 1;
        for(auto c : s[i])
        {
            if(cnt % 2 == 0 && c == 'F') res++;
            cnt++;
        }
    }
    cout << res;
    return 0;
}