#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, res, tmp;
    cin >> N;
    tmp = N % 5;
    res = N / 5;
    if(tmp != 0) cout << res + 1;
    else cout << res;
    return 0;
}