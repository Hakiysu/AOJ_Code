#include<bits/stdc++.h>
using namespace std;
int main() {
	long N, result;
	while (cin >> N)
	{
		if (N == 0 || N == 1)cout << "1" << endl;
		else {
			result = N;
			for (int timer = N;timer > 0;)
			{
				timer = timer - 2;
				if (timer <= 1)break;
				result = result * timer;
			}
			cout << result << endl;
		}
	}
	return 0;
}