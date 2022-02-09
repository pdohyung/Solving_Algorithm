#include <bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    int N, cnt = 0;
    string c;
    cin >> N;
    int num[N];

    for(int i = 0; i < N; i++) cin >> num[i];

    for(int j = 0; j <= N; j++){
        s.push(j);
        if (j != 0) c += '+';
        while(true)
        {
            if(s.top() == num[cnt]){
                c += '-';
                s.pop();
                cnt++;
            }
            else break;
        }
    }
    if(cnt < N) cout << "NO";
    else for(auto a : c) cout << a << '\n';
    return 0;
}