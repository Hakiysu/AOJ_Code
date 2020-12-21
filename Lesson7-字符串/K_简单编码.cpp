#define _CRT_SECURE_NO_WARNINGS
#include<bits/stdc++.h>
using namespace std;
int main() {
	char quitW[] = { "END" };
	while (1)
	{
		char temp[1024];
		cin >> temp;
		if (strcmp(temp, quitW)==0)break;
		for (int k = 0;k < 1024;k++)
		{
			if (temp[k] == 'A' || temp[k] == 'W' || temp[k] == 'F')temp[k] = 'I';
			else if (temp[k] == 'L')temp[k] = 'Y';
			else if (temp[k] == 'C')temp[k] = 'L';
			else if (temp[k] == 'M')temp[k] = 'o';
			else if (temp[k] == 'S')temp[k] = 'v';
			else if (temp[k] == 'D' || temp[k] == 'P' || temp[k] == 'G' || temp[k] == 'B')temp[k] = 'e';
			else if (temp[k] == 'X')temp[k] = 'u';
		}
		cout << temp << endl;
	}
	return 0;
}