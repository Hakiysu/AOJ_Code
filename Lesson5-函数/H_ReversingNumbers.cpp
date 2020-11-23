#include <iostream>
using namespace std;
int main()//反转数字
{
	int n[1024] = {0};
	int many;
	cin >> many;
	for (int t = 0;t < many;t++)
	{
		cin >> n[t];
	}

	for (int k = many-1;k >0;k--)
	{
		cout << n[k] <<" ";
	}//输出数组中的数
	cout << n[0];
	return 0;
}