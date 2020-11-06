
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long n;
	cin >> n;
	while (1)
	{
		if (n < 2 || n>1000000)break;
		if (n % 2 == 0)//ou
		{
			cout << n << "/2=" << n / 2<<endl;
			n = n / 2;
		}
		else//ji
		{
			cout << n << "*3+1=" << n * 3 + 1<<endl;
			n = n * 3 + 1;
		}
		if (n == 1)break;
	}
	return 0;
}