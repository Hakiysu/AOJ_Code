#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[128];
	cin >> s;
	int tot = 0;
	for (int a = 0;s[a];a++)
	{
		if (isalpha(s[a]))tot=tot+1;
	}
	cout << tot;
	return 0;
}