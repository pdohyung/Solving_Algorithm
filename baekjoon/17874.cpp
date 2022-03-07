#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    b = max(b, a - b);
    c = max(c, a - c);
    cout << b * c * 4;
    return 0;
}