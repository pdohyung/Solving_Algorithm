#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, K, sum = 0;
    cin >> N >> M >> K;
    sum += min(M, K);
    sum += min(N-M, N-K);
    cout << sum;
    return 0;
}