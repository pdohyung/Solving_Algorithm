#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int a, b, x, y, t;
    cin >> a >> x >> b >> y >> t;
    int f = max(0, t - 30) * x * 21 + a;
    int s = max(0, t - 45) * y * 21 + b;
    cout << f << ' ' << s;
    return 0;
}