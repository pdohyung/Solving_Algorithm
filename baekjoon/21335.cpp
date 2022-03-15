#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, pi = 3.1415926535;
    cin >> n;
    n = sqrt(n / pi) * 2 * pi;
    cout << fixed;
    cout.precision(7);
    cout << n;
    return 0;
}