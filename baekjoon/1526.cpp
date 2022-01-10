#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    N += 1;
    while(N--){
        int tmp = N;
        while(tmp % 10 == 4 || tmp % 10 == 7){
            tmp /= 10;
            if(tmp == 0){
                cout << N;
                return 0;
            }
        }
    }
}