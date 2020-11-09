#include <iostream>
#include <iomanip>
using namespace std;
//数组+擂台算法
int main()
{
	long n[10001];
	int plusall=0;
	int num;
	n[10000] = 0;
	cin >> num;
	for (int t = 0;t < num;t++)
	{
		cin >> n[t];
	}

	int c, min;
	for (int i = 0;i < num;i++)//此处开始打擂台
	{
		min = i;//将字符“i”复制到min变量中
		for (int j = i + 1;j < num;j++)
		{
			if (n[min] > n[j])//min为擂主，j去打min
			{
				min = j;//min赢了，所以将字符“j”复制到min变量中
			}
		}
		c = n[min];//将两个数组中的数值进行交换。
		n[min] = n[i];
		n[i] = c;
	}
	for (int plus = 0;plus < num;plus++)//此处开始打擂台
	{
		plusall = plusall + n[plus];
	}
	cout << n[0] << " " << n[num-1] << " " << plusall;
	return 0;
}