#include <bits/stdc++.h>
using namespace std;
int ioday(int year, int month, int day)
{
	int isRUN, all = 0;
	int runyear[13] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int pinyear[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{ //闰年
				isRUN = 1;
			}
			else
			{ //平年
				isRUN = 0;
			}
		}
		else
		{ //闰年
			isRUN = 1;
		}
	}
	else
	{ //平年
		isRUN = 0;
	}
	if (isRUN == 1)
	{
		for (int a = 1; a < month; a++)
		{
			all = all + runyear[a];
		}
		all = all + day;
	}
	else
	{
		for (int b = 1; b < month; b++)
		{
			all = all + pinyear[b];
		}
		all = all + day;
	}
	return all;
}
int main()
{
	int y, m, d;
	while (cin >> y >> m >> d)
	{
		cout << ioday(y, m, d) << endl;
	}
	return 0;
}