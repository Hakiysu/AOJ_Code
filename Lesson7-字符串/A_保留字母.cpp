#include<bits/stdc++.h>
using namespace std;
int main() {
	char s[100] = "2333";
	cin >> s;
	for (int a = 0;a < strlen(s);a++)
	{
		if ('a' <= s[a] && s[a] <= 'z' || 'A' <= s[a] && s[a] <= 'Z')
			cout << s[a];
	}
	return 0;
}