#include <bits/stdc++.h>
using namespace std;

int main(){
    int T[4], S[4];
    int sumT = 0, sumS = 0;
    for(int i = 0; i < 4; i++){
        cin >> T[i];
        sumT += T[i];
    }
    for(int i = 0; i < 4; i++){
        cin >> S[i];
        sumS += S[i];
    }

    if(sumS >= sumT) cout << sumS;
    else cout << sumT;

    return 0;
}