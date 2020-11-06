#include<bits/stdc++.h>
using namespace std;
int main() {
	//1!+2!+......+20!=what?
	//使用数组
	long long all = 0;
	long long numg[21] = { 0 };//number group
	for (int a = 1;a <= 20;a++)
	{
		long long pluser = 1;//中转b与pluser
		for (long long b = a;b >0;b--)//计算阶乘（从b乘到1）
		{
			pluser = pluser * b;
		}
		numg[a] = pluser;//注入数组
	}
	for (int fina = 1;fina <= 20;fina++)
	{
		//数组求和
		all = all + numg[fina];
	}
	cout << all;//输出
	return 0;
	//:D
	//i am idoit	:(
}