#include <iostream>
using namespace std;
int main()
{
	int fibo[20] = { 0 };
	fibo[0] = 1;
	fibo[1] = 1;
	for (int a = 2;a < 20;a++)
	{
		fibo[a] = fibo[a - 1] + fibo[a - 2];
	}
	for (int b = 0;b < 19;b++)
	{
		cout << fibo[b] << endl;
	}
	cout << fibo[19];
	return 0;
}