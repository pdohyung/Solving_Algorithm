#include <bits/stdc++.h>
using namespace std;

int main(){
    int D, H, W;
    double rH, rW, t;
    cin >> D >> H >> W;
    t = sqrt(H*H + W*W);
    rH = H * D / t;
    rW = W * D / t;
    cout << int(rH) << ' ' << int(rW);
    return 0;
}