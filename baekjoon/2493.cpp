#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, n;
    cin >> N;
    stack<pair<int,int>> num;
    num.push({100000001, 0});
    for(int i = 1; i <= N; i++){
        cin >> n;
        while(num.top().first < n){
            num.pop();
        }
        cout << num.top().second << " ";
        num.push({n, i});
    }
    return 0;
}