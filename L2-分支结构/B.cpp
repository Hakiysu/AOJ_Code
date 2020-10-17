#include <iostream>
using namespace std;
//copy from L1-E
int main() 
{
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	if (a > b)//a>b
	{
		if (b > c)//a>b>c
		{
			cout << "No";
		}
		else
		{
			if (a > c)//a>c>b
			{
				cout << "No";
			}
			else//c>a>b
			{
				cout << "No";
			}
		}
	}
	else//a<b
	{
		if (b > c)
		{
			if (a > c)//b>a>c
			{
				cout << "No";
			}
			else//b>c>a
			{
				cout << "No";
			}
		}
		else//c>b>a
		{
			cout << "Yes";
		}
	}
	return 0;
}