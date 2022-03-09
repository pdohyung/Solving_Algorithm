#include <bits/stdc++.h>
using namespace std;

int main(){
    int s, sum = 0, mn = 100;
    for(int i = 0; i < 3; i++){
        cin >> s;
        sum += s;
        mn = min(mn, s);
    }
    cout << sum - mn;
    return 0;
}