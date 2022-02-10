#include <bits/stdc++.h>
using namespace std;
#define X first;
#define Y second;

int b[502][502];
int v[502][502];
int n, m, cnt = 0;
int dx[4] = {1, 0, -1 ,0};
int dy[4] = {0, 1, 0, -1};
int mx = 0, d = 0;

int main(){
    queue<pair<int, int>> Q;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cin >> b[i][j];
    }
    for(int x = 0; x < n; x++){
        for(int y = 0; y < m; y++){
        if(b[x][y] == 1 && v[x][y] == 0){
            v[x][y] = 1;
            Q.push({x, y});
            cnt = 0;
            while(!Q.empty()){
            pair<int, int> cur = Q.front();
            Q.pop();
            cnt++;
            for(int dir = 0; dir < 4; dir++)
            {
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            if(nx < 0 || nx > n || ny < 0 || ny > m) continue;
            if(v[nx][ny] || b[nx][ny] != 1) continue;
            v[nx][ny] = 1;
            Q.push({nx, ny});
            }
            }
            d++;
            mx = max(mx, cnt);
        }
    }
}
cout << d << '\n' << mx;
    return 0;
}