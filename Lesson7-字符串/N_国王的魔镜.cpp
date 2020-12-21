#include<bits/stdc++.h>
using namespace std;
bool ok(char *s)
{
	int n = strlen(s);
	if (n < 2 || n % 2 != 0)return false;
	char t[100 + 16];
	strcpy(t, s);
	reverse(t, t + n);
	return strcmp(t, s) == 0;
}
int main() {
	int Text;
	cin >> Text;
	while (Text--) {
		char s[100 + 16];
		cin >> s;
		while (ok(s)) 
		{
			s[strlen(s) / 2] = 0;
		}
		cout << strlen(s) << endl;
	}

	return 0;
}