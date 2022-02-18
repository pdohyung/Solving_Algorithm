#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, A, B;
    cin >> N;
    A = N - N / 100 * 22;
    B = N - (N / 100 * 20) / 100 * 22;
    cout << A << ' ' << B;
    return 0;
}