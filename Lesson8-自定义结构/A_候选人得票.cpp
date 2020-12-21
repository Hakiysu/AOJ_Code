#include <bits/stdc++.h>
using namespace std;

struct Person
{
	char name[20];
	int count;
} leader[3] = {"Li", 0, "Zhang", 0, "Fun", 0};

int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		char temp[32];
		cin >> temp;
		if (strcmp(temp, "Li") == 0)
			leader[0].count++;
		if (strcmp(temp, "Zhang") == 0)
			leader[1].count++;
		if (strcmp(temp, "Fun") == 0)
			leader[2].count++;
	}
	cout << "Li:" << leader[0].count << endl;
	cout << "Zhang:" << leader[1].count << endl;
	cout << "Fun:" << leader[2].count << endl;
	return 0;
}