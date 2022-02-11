#include <bits/stdc++.h>
using namespace std;

string b[102];
int d[102][102];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n, m;

int main(){
    queue<pair<int, int>> Q;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> b[i];
        fill(d[i], d[i]+m, -1);
    }
    Q.push({0,0});
    d[0][0] = 1;
    while(!Q.empty()){
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(d[nx][ny] >= 0 || b[nx][ny] != '1') continue;
            Q.push({nx, ny});
            d[nx][ny] = d[cur.first][cur.second] + 1;
        }
    }
    cout << d[n-1][m-1];
    return 0;
}