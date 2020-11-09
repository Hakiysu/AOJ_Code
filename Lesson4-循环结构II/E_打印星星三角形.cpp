#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int bl = 1;bl <= n;bl++) {
		for (int a = 1;a <= bl;a++)
		{
			cout << "*";
			if (a == bl)cout << endl;
		}
	}

	return 0;
}