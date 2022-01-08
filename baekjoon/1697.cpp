#include <bits/stdc++.h>
using namespace std;

int b[200001];
int v[200001];
int d[3] = {1, -1, 2};

int main(){
    int A, B;
    cin >> A >> B;
    if(A == B){
        cout << 0;
        return 0;
    }
    queue<int> Q;
    Q.push(A);
    v[A] = 1;
    while(!Q.empty()){
        int cur = Q.front();
        Q.pop();
        
        for(int dir = 0; dir < 3; dir++){
            int dx;
            if(dir == 2) dx = cur * d[dir];
            else dx = cur + d[dir];
            if(dx == B){
                cout << b[cur] + 1;
                return 0;
            }
            if(dx < 0 || dx > 200001) continue;
            if(v[dx]) continue;
            b[dx] = b[cur] + 1;
            v[dx] = 1;
            Q.push(dx);
        }
    }
}