#include <bits/stdc++.h>
using namespace std;

struct Student
{
	int num;
	char name[20];
	char sex;
	int age;
};

int main()
{
	Student stulist[256] = {NULL};
	int k = 0;
	int T;
	cin >> T;

	while (T--)
	{
		cin >> stulist[k].num >> stulist[k].name >> stulist[k].sex >> stulist[k].age;
		k++;
	}
	for (int m = 0; m < k; m++)
	{
		cout << stulist[m].num << " " << stulist[m].name << " " << stulist[m].sex << " " << stulist[m].age << endl;
	}

	return 0;
}