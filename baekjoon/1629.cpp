#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll pow(int a, int b, int c){
    if(b == 1) return a % c;
    ll val = pow(a, b/2, c);
    val = val * val % c;
    if(b % 2 == 0) return val;
    return val * a % c; 
}


int main(){
    ll A, B, C;
    cin >> A >> B >> C;
    cout << pow(A, B, C);
    return 0;
}