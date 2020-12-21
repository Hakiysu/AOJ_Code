#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[256] = "0";//建立字符串组
	while (cin >> s) 
	{
		bool hw = 1;//判断回文，初始化为1
		int longS = 0;//初始化字符串长度为0
		longS = strlen(s);//检测输入字符串的长度
		if (longS % 2 == 0) 
		{
			for (int a = 0;a < (longS / 2);a++)//偶数个字符
			{
				if (s[a] != s[longS - 1 - a])
				{
					hw = 0;//不是回文则为0
				}
			}
		}
		else
		{
			for (int b = 0;b < (longS-1)/2;b++)//奇数个字符，则最中间那个不用判断
			{
				if (s[b] != s[longS - 1 - b])
				{
					hw = 0;//不是回文则为0
				}
			}
		}
		if (hw == 1)//输出
		{
			cout << "Y" << endl;
		}
		else
		{
			cout << "N" << endl;
		}
		memset(s, 0, sizeof(s));
	}
	return 0;
}