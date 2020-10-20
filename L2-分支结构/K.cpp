#include <iostream>
using namespace std;
int main()
{
	int y, m, d;
	int year;
	cin >> y >> m;
	if (y % 4 == 0)
	{
		if (y % 100 == 0)
		{
			if (y % 400 == 0)
			{
				year = 1;//闰年
			}
			else
			{
				year = 0;//平年
			}
		}
		else
		{
			year = 1;//闰年
		}
	}
	else
	{
		year = 0;//平年
	}
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
	{
		cout << "31";
	}
	if (m == 4 || m == 6 || m == 9 || m == 11)
	{
		cout << "30";
	}
	if (m == 2)
	{
		if (year == 1)
		{
			cout << "29";
		}
		else
		{
			cout << "28";
		}
	}

	return 0;
}