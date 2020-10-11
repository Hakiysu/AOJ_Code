#include <iostream>
using namespace std;
int main()
{
	int a, b, c, x, y, z;
	cin >> a >> b >> c;
	if (a > b)//a>b
	{
		if (b > c)//a>b>c
		{
			x = a;y = b;z = c;
		}
		else
		{
			if (a > c)//a>c>b
			{
				x = a;y = c;z = b;
			}
			else//c>a>b
			{
				x = c;y = a;z = b;
			}
		}
	}
	else//a<b
	{
		if (b > c)
		{
			if (a > c)//b>a>c
			{
				x = b;y = a;z = c;
			}
			else//b>c>a
			{
				x = b;y = c;z = a;
			}
		}
		else//c>b>a
		{
			x = c;y = b;z = a;
		}
	}
	cout << z << " " << y << " " << x;
	//x min,y medium,z max
	return 0;
}