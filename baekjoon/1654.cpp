#include <bits/stdc++.h>
using namespace std;

int main(){
    long long K, N, cnt, mid, s, e;
    cin >> K >> N;
    vector<long long> len(K);
    for(long long i = 0; i < K; i++) cin >> len[i];
    sort(len.begin(), len.end());

    s = 1;
    e =len[K-1]+1;
        while(s < e){
            mid = (s+e)/2;
            cnt = 0;
            for(long long j = 0; j < K; j++){
                cnt += len[j]/mid;
            } 
            if(cnt < N) e = mid;
            else s = mid+1;
        }
        cout << s-1;
    return 0;
}