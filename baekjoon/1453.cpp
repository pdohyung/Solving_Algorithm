#include <bits/stdc++.h>
using namespace std;

int v[101];

int main(){
    int N, num, res = 0;
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> num;
        if(v[num] == 1) res += 1;
        else v[num] = 1;
    }
    
    cout << res;

    return 0;
}