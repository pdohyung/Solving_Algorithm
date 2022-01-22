#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, sum = 0;
    cin >> N;
    while(N != 0){
        while(N != 0){
            sum += N % 10;
            N /= 10;
        }
        if(sum < 10){
            cout << sum << '\n';
            cin >> N;
        }
        else N = sum;
        sum = 0;
    }
    return 0;
}