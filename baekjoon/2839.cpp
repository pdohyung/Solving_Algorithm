#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, sum = 0;
    cin >> N;
    sum += N / 5;
    N -= sum * 5;
    while(N >= 0){
        if(N % 3 == 0){
            sum += N / 3;
            cout << sum;
            break;
        }
        N += 5;
        sum--;
        if(sum == -1){
            cout << sum;
            break;
        }
    }
    return 0;   
}