#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int a, b, c, n;
	int num1,num2;
	while (cin >> num1 >> num2)
	{
		if(num1==0||num2==0)continue;
		if(num1==num2)continue;
		for (int cnt1 = num1;num1 <= num2;num1++)//遍历num1~num2 
		{
			n = num1;
			
			a = (n - n % 100) / 100;
			c = (n - a * 100) % 10;
			b = (n - a * 100 - c) / 10;
			
			if (n == a * a * a + b * b * b + c * c * c)
			{
				if (n>100&&n<1000)cout << n << endl;//是水仙花数就输出 
			}
		}

	}
	return 0;
}