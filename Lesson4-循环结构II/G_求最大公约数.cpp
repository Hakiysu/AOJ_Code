#include <iostream>
using namespace std;
int maxgys(int m, int n)
{

	while (m != n)
	{
		if (m > n)
		{
			m = m - n;
		}
		else
		{
			n = n - m;
		}
	}
	return m;
}
int main()
{
	int a, b;
	cin >> a >> b;
	cout << maxgys(a, b) << endl;
	return 0;
}