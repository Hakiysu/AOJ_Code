#include<bits/stdc++.h>
using namespace std;
int main() {
	char a[128], b[128], c[128];
	cin >> a >> b >> c;
	int x, y, z;
	x = a[strlen(a) - 1]-48;
	y = b[strlen(b) - 1]-48;
	z = c[strlen(c) - 1]-48;
	if (x + y >= 10)
	{
		if (x + y - 10 == z)
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		if (x + y == z)cout << "YES";
		else cout << "NO";
	}
	return 0;
}