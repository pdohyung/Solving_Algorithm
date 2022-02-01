#include <bits/stdc++.h>
using namespace std;

int func(int n, int a, int b){
    if(n == 0) return 0;
    int half = 1<<(n-1);
    if(a < half && b < half) return func(n-1, a, b);
    if(a < half && b >= half) return half*half + func(n-1 ,a, b - half);
    if(a >= half && b < half) return 2*half*half + func(n-1, a - half, b);
    return 3*half*half + func(n-1,a - half, b - half);
}


int main(){
    int a, b, n;
    cin >> n >> a >> b;
    cout << func(n,a,b);

    return 0;
}