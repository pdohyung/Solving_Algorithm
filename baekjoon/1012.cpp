#include <bits/stdc++.h>
using namespace std;

int b[51][51];
int v[51][51];
int n, m, k, t;
int p, q, cnt = 0, r = 0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    queue<pair<int, int>> Q;
    queue<pair<int, int>> T;
    cin >> t;
    while(t--){
        r = 0;
        cin >> n >> m >> k;
        int tmp = k;
    while(k--){
        cin >> p >> q;
        b[p][q] = 1;
        T.push({p,q});
    }
    while(tmp--){
        Q.push(T.front());
        T.pop();
        cnt = 0;
    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        if(v[cur.first][cur.second] != 1) cnt += 1;
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(v[nx][ny] || b[nx][ny] != 1) continue;
            Q.push({nx, ny});
            v[nx][ny] = 1;
        }
    }
    if(cnt > 0) r += 1;
    }
    //if(n == 1 && m == 1) cout << 1 << '\n';
    cout << r << '\n';
    for(int i = 0; i < n; i++){
        fill(v[i], v[i]+m, 0); 
        fill(b[i], b[i]+m, 0);
    }
    }
    return 0;
}