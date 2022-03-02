#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, n, cnt = 0;
    cin >> num;
    for(int i = 0; i < 5; i++){
        cin >> n;
        if(num == n) cnt++;
    }
    cout << cnt;
    return 0;
}