#include<bits/stdc++.h>
using namespace std;
int main() {
	int T;
	cin >> T;
	while (T--) {
	    char s[4];
		cin >> s;
		sort(s, s + 3);
		cout << s[0] << " " << s[1] << " " << s[2] << endl;
	}
	return 0;
}
