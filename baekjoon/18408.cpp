#include <bits/stdc++.h>
using namespace std;

int main(){
    int num, n1 = 0,  n2 = 0;
    for(int i = 0; i < 3; i++){
        cin >> num;
        if(num == 1) n1++;
        else n2++;
    }
    if(n1 > n2) cout << 1;
    else cout << 2;
    return 0;
}