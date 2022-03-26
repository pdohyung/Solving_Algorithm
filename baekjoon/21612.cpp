#include <bits/stdc++.h>
using namespace std;

int main(void) { 
    int B;
    cin >> B;
    int T = 5 * B - 400;
    cout << T << "\n";
    if (T < 100) cout << 1; 
    else if (T > 100) cout << -1;
    else cout << 0;

    return 0;
}

