#include<bits/stdc++.h>
using namespace std;
const int maxn = 21;
const int BOMB = 999;
int a[maxn][maxn];
int m, n, k, x, y;
void show() {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (a[i][j] != BOMB) {
				cout << a[i][j];
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}
void cal() {
	for (x = 0; x < n; x++) for (y = 0; y < m; y++) {
		if (a[x][y] == BOMB) {
			continue;
		}
		int& tot = a[x][y];
		for (int dx = -1; dx <= 1; ++dx) for (int dy = -1; dy <= 1; ++dy) {
			if (dx == 0 && dy == 0) {
				continue;
			}
			int nx = x + dx;
			int ny = y + dy;
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) {
				continue;
			}
			if (a[nx][ny] == BOMB) {
				++tot;
			}
		}
	}
}
void input() {
	memset(a, 0, sizeof(a));
	while (k--) {
		cin >> x >> y;
		a[x][y] = BOMB;
	}
}
int main() {
	
	while (cin >> n >> m >> k) {
		input();
		cal();
		show();
		cout << endl;
	}
	return 0;
}