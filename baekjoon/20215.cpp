#include <bits/stdc++.h>
using namespace std; 

int main(){
    double w, h;
    cin >> w >> h;
    cout << fixed;
    cout.precision(6);
    cout << w + h - sqrt(w*w + h*h);
    return 0;
}