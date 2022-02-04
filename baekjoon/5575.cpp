#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int h1, m1, s1, h2, m2, s2;
	int sum, t1, t2;
	int H[3], M[3], S[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d %d %d %d", &h1, &m1, &s1, &h2, &m2, &s2);

		t1 = h1 * 3600 + m1 * 60 + s1;
		t2 = h2 * 3600 + m2 * 60 + s2;
		sum = t2 - t1;

		H[i] = sum / 60 / 60 % 24;
		M[i] = sum / 60 % 60;
		S[i] = sum % 60;
        cout << H[i] << " " << M[i] << " " << S[i]<< '\n';
	}
	return 0;
}