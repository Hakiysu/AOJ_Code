#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
void show() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void cal() {
	memset(a, 0, sizeof(a));
	int x = n - 1, y = n / 2;
	a[x][y] = 1;
	for (int k = 2; k <= n * n; k++) {
		int nx = (x + 1) % n;
		int ny = (y + 1) % n;
		if (a[nx][ny] != 0) {
			nx = (x - 1 + n) % n;
			ny = y;
		}
		a[nx][ny] = k;
		x = nx;
		y = ny;
	}
}
int main() {
	while (cin >> n) {
		if (n == 0)break;
		cal();
		show();
		cout << endl;
	}
	return 0;
}
