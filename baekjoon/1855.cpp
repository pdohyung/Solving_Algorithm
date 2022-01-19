#include <bits/stdc++.h>
using namespace std;

char b[201][201];

int main(){
    int K, cnt = 0;
    string s;
    cin >> K;
    cin >> s;
    for(int i = 0; i < s.length()/K; i++){
        if(i % 2 == 0){
            for(int j = 0; j < K; j++)
            {
                b[i][j] = s[cnt];
                cnt++;
                
            }
        }
        else{
            for(int j = K-1; j >= 0; j--)
            {
                b[i][j] = s[cnt];
                cnt++;
            }
        }
    }
    
    for(int i = 0; i < K; i++){
        for(int j = 0; j < s.length()/K; j++){
           cout << b[j][i];
        }
    }
    return 0;
}