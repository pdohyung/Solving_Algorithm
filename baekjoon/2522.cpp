#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i = N; i > 0; i--){
        for(int j = 1; j <= N; j++){
            if(i <= j) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
    for(int i = 1; i < N; i++){
        for(int j = 1; j <= N; j++){
            if(i < j) cout << '*';
            else cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}