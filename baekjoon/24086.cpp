#include <bits/stdc++.h>
using namespace std;

int main(){
    int A, B;
    cin >> A >> B;
    if(A > B) cout << A - B;
    else cout << B - A;
    return 0;
}