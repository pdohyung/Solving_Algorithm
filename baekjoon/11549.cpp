#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, num, cnt = 0;
    cin >> n;
    for(int i = 0; i < 5; i++){
        cin >> num;
        if(n == num) cnt++;
    }
    cout << cnt;
    return 0;
}