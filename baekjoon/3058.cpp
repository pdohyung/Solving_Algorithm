#include <bits/stdc++.h>
using namespace std;
int main(){
int T;
cin >> T;
while(T--){
    int n[7], sum = 0, mn = 100;
    for(int i = 0; i < 7; i++){
        cin >> n[i];
        if(n[i] % 2 == 0){
            sum += n[i];
            mn = min(mn, n[i]);
        }
    }
    cout << sum << ' ' << mn << '\n';
}
return 0;
}