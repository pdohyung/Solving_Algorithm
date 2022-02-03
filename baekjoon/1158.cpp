#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> L;
    int N, K, e;
    cin >> N >> K;
    int num[N];
    
    for(int i = 1; i <= N; i++) L.push_back(i);
    list<int>::iterator t = L.begin();
    
    for(int j = 0; j < N; j++)
    {
        e = L.back();
        for(int k = 0; k < K-1; k++)
        {
            	if(e == *t) t = L.begin();
            	else t++;
        }
        num[j] = *t;
        if(e == *t)
        {
            L.erase(t);
            t = L.begin();
        }
        else t = L.erase(t);
    }
    cout << "<";
    for(int k = 0; k < N; k++)
    	{
        	cout << num[k];
        	if(k != N-1) cout << ", ";
    	}
    cout << ">";
    return 0;
}