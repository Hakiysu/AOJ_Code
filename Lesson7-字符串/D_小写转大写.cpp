#include<bits/stdc++.h>
using namespace std;
int main() {
	char keyIn[100];
	while (cin >> keyIn)
	{
		int length = strlen(keyIn);
		for (int a = 0;a < length;a++)
		{
			if (keyIn[a] >= 'a' && keyIn[a] <= 'z')
			{
				cout <<char( toupper(keyIn[a]));
			}
			else
			{
				cout << char(keyIn[a]);
			}
		}
		cout << endl;
	}
	return 0;
}