#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, T, C, P;
    cin >> N >> T >> C >> P;
    N = (N - 1) / T;
    cout << N * C * P;
    return 0;
}