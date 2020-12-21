#include <bits/stdc++.h>
using namespace std;
struct Stuinf
{
	int id;
	char name[20];
	int score1;
	int score2;
	int score3;
};
int main()
{
	Stuinf stulist[5];

	int T = 4;
	int turn = 0;
	while (T >= 0)
	{
		turn = 4 - T;
		cin >> stulist[turn].id >> stulist[turn].name >> stulist[turn].score1 >> stulist[turn].score2 >> stulist[turn].score3;
		T--;
	}

	for (int k = 0; k < 5; k++)
	{
		cout << stulist[k].id << " " << stulist[k].name << " " << stulist[k].score1 << " " << stulist[k].score2 << " " << stulist[k].score3 << endl;
	}
	return 0;
}