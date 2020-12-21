#include<bits/stdc++.h>
using namespace std;
int n, i, j, k, a[20][20];
int main()
{
	cin >> n;
	/*
	k = 1;k <= (n + 1) / 2;k++
	
	*/
	n = n * 2+1;
	for (k = 1;k <= (n + 1) / 2;k++)//input
	{
		for (i = k;i <= n + 1 - k;i++)
		{
			for (j = k;j <= n + 1 - k;j++)
				a[i][j] = n/2-k+1;
		}
	}

	for (i = 1;i <= n;i++)//output
	{
		for (j = 1;j < n;j++)
			cout << setw(2) << a[i][j];
		cout << setw(2) << a[i][n] << endl;
	}
	return 0;
}