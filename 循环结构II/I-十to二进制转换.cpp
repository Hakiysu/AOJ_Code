#include<bits/stdc++.h>
using namespace std;
int main() {
	long n;
	while (cin >> n)
	{
		if (n == 0)cout << "0-->0" << endl;
		if (n > 0)
		{
			int p, c, m = 0, s[128];
			int ram;
			p = 2;
			ram = n;
			cout << ram << "-->";
			while (n != 0)
			{
				c = n % p;
				n = n / p;
				m++;s[m] = c;
			}

			for (int k = m;k >= 1;k--)
			{
				cout << s[k];
			}
			cout << endl;
		}
		if(n<0)
		{
			n = -n;
			int p, c, m = 0, s[128];
			int ram;
			ram = -n;
			p = 2;
			cout << ram << "-->-";
			while (n != 0)
			{
				c = n % p;
				n = n / p;
				m++;s[m] = c;
			}

			for (int k = m;k >= 1;k--)
			{
				cout << s[k];
			}
			cout << endl;
		}
		
	}
	return 0;
}