#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, sum = 0;
    for(int i = 1; i < 4; i++){
        cin >> num;
        sum += i * num;
    }
    if(sum >= 10) cout << "happy";
    else cout << "sad";
    return 0;
}