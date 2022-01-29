#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, c, sum = 0;
        cin >> N;
        while(N--){
            cin >> c;
            sum += c;
        }
        cout << sum <<'\n';
    }
    return 0;
}