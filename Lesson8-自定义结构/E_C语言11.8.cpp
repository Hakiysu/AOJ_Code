#include <bits/stdc++.h>
using namespace std;
struct Stuinf
{
	int id;
	char name[20];
	double score1;
	double score2;
	double score3;
};

int main()
{
	Stuinf stulist[10];

	int turn = 0;
	while (turn < 10)
	{
		cin >> stulist[turn].id >> stulist[turn].name >> stulist[turn].score1 >> stulist[turn].score2 >> stulist[turn].score3;
		turn++;
	}

	double ave1 = 0, ave2 = 0, ave3 = 0;
	double stuave[10] = {0};

	for (int k = 0; k < 10; k++)
	{
		ave1 = ave1 + stulist[k].score1;
		ave2 = ave2 + stulist[k].score2;
		ave3 = ave3 + stulist[k].score3;
		stuave[k] = (stulist[k].score1 + stulist[k].score2 + stulist[k].score3) / 3;
	}
	ave1 = ave1 / 10;
	ave2 = ave2 / 10;
	ave3 = ave3 / 10;
	int maxset = 0, maxscore = 0;
	//遍历从0-n-1
	for (int i = 0; i < 10; i++)
	{
		if (stuave[i] > maxscore)
		{
			//更新最大值
			maxscore = stuave[i];
			//更新最大值下标
			maxset = i;
		}
	}
	cout << fixed << setprecision(2) << ave1 << " " << ave2 << " " << ave3 << endl;
	cout << fixed << setprecision(0) << stulist[maxset].id << " " << stulist[maxset].name << " " << stulist[maxset].score1 << " " << stulist[maxset].score2 << " " << stulist[maxset].score3 << endl;
	return 0;
}