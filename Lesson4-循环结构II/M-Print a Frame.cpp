#include<bits/stdc++.h>
using namespace std;
int main() {
	int h, w;
	while (cin >> h >> w)
	{
		if (h == 0 && w == 0)break;
		for (int y = 1;y <= h;y++)//高
		{
			for (int x = 1;x <= w;x++)//宽
			{
				if (x == 1 || x == w || y == 1 || y == h)cout << "#";
				else cout << ".";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}