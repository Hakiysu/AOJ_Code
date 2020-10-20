#include <iostream>
using namespace std;

int main()
{
    int n[4];//建立可含4个数字的数组

    for (int t = 0;t < 4;t++)//t仅作为计数器
	{
		cin >> n[t];
	}//输入4个数到数组里

    for (int k = 0;k < 4;k++)//k仅作为计数器
	{
		cout << n[k] << " ";
	}//输出数组中的4个数
	return 0;
}