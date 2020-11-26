#include <iostream>
#include <iomanip>
using namespace std;
//数组+擂台算法
int main()
{
	int n[10];//建立可含4个数的空数组
	for (int t = 0;t <= 9;t++)
	{
		cin >> n[t];
	}//输入数到数组里

	for (int k = 9;k >=0;k--)
	{
		cout << n[k] << endl;
	}//输出数组中的数
	return 0;
}