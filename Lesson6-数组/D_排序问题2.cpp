#include <iostream>
#include <iomanip>
using namespace std;
//数组+擂台算法
int main()
{
	int n[10];//建立可含4个数的空数组
	for (int t = 0;t < 10;t++)
	{
		cin >> n[t];
	}//输入4个数到数组里

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


	for (int k = 9;k >0;k--)
	{
		cout << n[k] << " ";
	}//输出数组中的数
	cout << n[0];
	return 0;
}