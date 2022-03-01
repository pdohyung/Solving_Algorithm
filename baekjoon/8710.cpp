#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, s, cnt = 0;
    cin >> m >> n >> s;
    while(m < n){
        m += s;
        cnt += 1;
    }
    cout << cnt;
    return 0;
}