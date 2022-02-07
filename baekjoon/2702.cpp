#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int a, b, res1, res2;
        cin >> a  >> b;
        int mx = max(a, b);
        int mn = min(a, b);
        for(int i = 1; i <= mx; i++){
            bool c = 0;
            for(int j = 1; j <= mx; j++){
                if(a*i == b*j){
                    res1 = a*i;
                    c = 1;
                    break;
                }
            }
            if(c == 1) break;
        }
        for(int i = mn; i > 0; i--){
            if(a%i == 0 && b%i == 0){
                res2 = i;
                break;
            }
        }
        cout << res1 << " " << res2 << '\n';
    }

    return 0;
}