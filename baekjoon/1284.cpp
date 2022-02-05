#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char n[5];
    while(true){
        int r = 0;
        cin >> n;
        if(n[0] == '0') break;
        r += strlen(n) + 1;
        for(int i = 0; i < strlen(n); i++){
            if(n[i] == '1') r += 2;
            else if(n[i] == '0') r += 4;
            else r += 3;
           // cout << r << '\n';
        }
        cout << r << '\n';
    }

    return 0;
}