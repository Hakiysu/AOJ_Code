#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n)
	{
		int plus = 0;//累加器
		int d = 0;
		while (n)
		{
			d = n % 10;
			plus = plus + d;
			n = n / 10;
			if (n<1)cout << plus << endl;
		}
	}
	
	return 0;
}