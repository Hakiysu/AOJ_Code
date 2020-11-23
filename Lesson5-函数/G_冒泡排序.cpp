#include <iostream>
using namespace std;
int main()
{
	int n[10];
	for (int t = 0;t < 10;t++)
	{
		cin >> n[t];
	}

	int c, min;
	for (int i = 0;i < 10;i++)//此处开始打擂台
	{
		min = i;//将字符“i”复制到min变量中
		for (int j = i + 1;j < 10;j++)
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


	for (int k = 0;k < 9;k++)
	{
		cout << n[k] <<endl;
	}//输出数组中的数
	cout << n[9];
	return 0;
}