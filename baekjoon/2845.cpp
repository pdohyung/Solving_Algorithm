#include <bits/stdc++.h>
using namespace std;


int main(){
    int L, P, num[5];
    cin >> L >> P;
    for(int i = 0; i < 5; i++){
        cin >> num[i];
        num[i] -= L * P;
        cout << num[i] << " ";
    }


    return 0;
}