#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, P, cnt = 0;
    cin >> N >> M >> P;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(cnt == P){
                cout << i << ' ' << j;
                return 0;
            }
            cnt++;
        }
    }
}