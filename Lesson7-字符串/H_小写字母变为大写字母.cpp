#include <bits/stdc++.h>
using namespace std;
int main()
{
	char tempText[4096] = {'\0'};
	cin.getline(tempText, 1000);
	int k;
	k = strlen(tempText);
	for (int i = 0; i < k; i++)
	{
		if (tempText[i] >= 'a' && tempText[i] <= 'z')
			cout << char(toupper(tempText[i]));
		else
			cout << char(tempText[i]);
	}
	return 0;
}