#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    while(true){
        int res = 0;
        getline(cin, s);
        if(s[0] == '#') break;
        for(auto c : s){
            if(c == 'a' || c == 'e' || c == 'i' || c =='o' || c == 'u') res++;
            else if(c == 'A' || c == 'E' || c == 'I' || c =='O' || c == 'U') res++;
        }
        cout << res << '\n';
    }
    return 0;
}