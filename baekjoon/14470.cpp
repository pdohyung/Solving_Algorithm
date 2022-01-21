#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B, C, D, E, res = 0;
    cin >> A >> B >> C >> D >> E;
    while(B > A){
    if(A == 0) res += D;
    if(A < 0) res += C;
    else res += E;
    A++;
    }
    cout << res;
    return 0;
}