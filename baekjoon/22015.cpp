#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C;
    cin >> A >> B >> C;
    int mx = max({A, B, C});
    int res = (mx - A) + (mx - B) + (mx - C);
    cout << res;
    return 0;
}