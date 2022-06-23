#include <bits/stdc++.h>
using namespace std;
int main(){
int N, cnt = 0, a = 1, res = 0;
cin >> N;
while(1){
    int temp = a;
    while((temp % 10) != 0 || (temp / 10) != 0){
        if(temp%10 == 6) res += 1;
        else res = 0;
        if(res == 3) cnt++;
        if(res == 3 && N == cnt){
            cout << a;
            return 0;
        }
        temp /= 10;
    }
    res = 0;
    a++;
}
}