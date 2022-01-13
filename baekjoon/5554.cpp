#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0;
    int t[4];
    for(int i = 0; i < 4; i++){
        cin >> t[i];
        sum += t[i];
    }
    cout << sum / 60 << '\n';
    cout << sum % 60;
    return 0;
}