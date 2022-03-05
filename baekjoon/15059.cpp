#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3], b[3], sum = 0;
    for(int i = 0; i < 3; i++) cin >> a[i];
    for(int j = 0; j < 3; j++) cin >> b[j];
    for(int k = 0; k < 3; k++) if((b[k] - a[k]) > 0) sum += b[k] - a[k];
    cout << sum;
    return 0;   
}