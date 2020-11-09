#include<bits/stdc++.h>
using namespace std;
int main() {
	int h, w;//height and weight
	while (cin >> h >> w)
	{
		if (h == 0 && w == 0)break;
		for (int height = 1;height <= h;height++)
		{
			for (int weight = 1;weight <= w;weight++)
			{
				cout << "#";
			}
			cout << endl;
		}
		cout << endl;
	}
	return 0;
}