#include <bits/stdc++.h>
using namespace std;

const int mx = 1000001;
int nxt[mx], pre[mx];
char dat[mx];
int unused = 1;

void insert(int addr, char num){
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
    
}
void erase(int addr){
    nxt[pre[addr]] = nxt[addr];
    if(nxt[addr] != -1) pre[nxt[addr]] = pre[addr];
}

int main(){
    fill(nxt, nxt+mx, -1);
    fill(pre, pre+mx, -1);

    char C;
    int M, cursor = 0;
    string s;
    
    cin >> s;
    for(auto a : s){
        insert(cursor , a);
        cursor++;
    }

    cin >> M;

    for(int i = 0; i < M; i++){
        cin >> C;
        if(C == 'L'){
            if(pre[cursor] != -1) cursor = pre[cursor];
        }
        else if(C == 'D'){
            if(nxt[cursor] != -1) cursor = nxt[cursor];
        }
        else if(C == 'B'){
            if(pre[cursor] != -1){
                erase(cursor);
                cursor = pre[cursor];
            }
        }
        else if(C == 'P'){
            char add;
            cin >> add;
            insert(cursor, add);
            cursor = nxt[cursor];
        }
    }
    int cur = nxt[0];
    while(cur != -1){
        cout << dat[cur];
        cur = nxt[cur];
    }
    return 0;
}