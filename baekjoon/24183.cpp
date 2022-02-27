#include <bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << fixed;
    cout.precision(6);
    cout << (a * 229 * 324 * 2 + b * 297 * 420 * 2 + c * 210 * 297 ) / 1000000;
    return 0;
}