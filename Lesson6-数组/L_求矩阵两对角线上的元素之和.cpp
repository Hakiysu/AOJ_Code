#include<bits/stdc++.h>
using namespace std;
int main() {
	int n=1;
	cin >> n;
	bool isOUSHU = 0;
	if (n % 2 == 0)isOUSHU = 1;
	int a[10][10] = { {0} ,{0} };
	for (int y = 0;y < n;y++)
		for (int x = 0;x < n;x++)
			cin >> a[x][y];
	int L_line = 0, R_line = 0;
	for (int k = 0;k < n;k++)
	{
		L_line += a[k][k];
		R_line += a[n - 1 - k][k];
	}
	if (isOUSHU == 1) {
		cout << L_line + R_line;
	}
	else
	{
		cout << L_line + R_line - a[(n - 1) / 2][(n - 1) / 2];
	}
	return 0;
}