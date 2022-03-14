#include <bits/stdc++.h>
using namespace std;

int main(){
    int num[3], mx = 1, mn = 100, mx_n = 0, mn_n = 0;
    for(int i = 0; i < 3; i++){
        cin >> num[i];
        mx = max(mx, num[i]);
        mn = min(mn, num[i]);
    }
    for(int j = 0; j < 3; j++){
       if(num[j] == mx || num[j] == mn){
           if(num[j] == mx) mx_n += 1;
           if(num[j] == mn) mn_n += 1;
       }
       else{
       cout << num[j];
       return 0;
       }
    }
    if(mx_n == 2) cout << mx;
    else cout << mn;
    return 0;
}