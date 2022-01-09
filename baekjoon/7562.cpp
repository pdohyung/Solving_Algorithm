#include <bits/stdc++.h>
using namespace std;

int b[301][301];
int v[301][301];
int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int l, x, y, rx, ry, t;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int, int>> Q;
    cin >> t;
    while(t--){
    cin >> l;
    cin >> x >> y;
    cin >> rx >> ry;
    Q.push({x,y});
    v[x][y] = 1;
    while(Q.empty() != 1){
        pair<int, int> cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 8; dir++){
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
            if(v[nx][ny] == 1) continue;
            b[nx][ny] = b[cur.first][cur.second] + 1;
            v[nx][ny] = 1;
            Q.push({nx, ny});
        }
    }
    cout << b[rx][ry] << '\n';
    for(int i = 0; i < l; i++){
        for(int j = 0; j < l; j++){
            b[i][j] = 0;
            v[i][j] = 0;
        }
    }
    }
    return 0;
}