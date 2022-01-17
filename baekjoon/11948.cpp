#include <bits/stdc++.h>
using namespace std;
int main(){

int a[4];
int b[2];
int mn_a = 100, mn_b = 100, sum = 0;
for(int i = 0; i < 4; i++){
 cin >> a[i];
 mn_a = min(mn_a, a[i]);
 sum += a[i];
}
for(int i = 0; i < 2; i++){
 cin >> b[i];
 mn_b = min(mn_b, b[i]);
 sum += b[i];
}
cout << sum - mn_a - mn_b;

}