#include <bits/stdc++.h>
using namespace std;
struct Student
{
	char name[20];
	int finalScore;
	int classScore;
	char isAdmin;
	char isWstu;
	int article;
	int money = 0;
};
int main()
{
	Student stulist[128];
	int k = 0;
	int T;
	cin >> T;
	while (T--)
	{
		cin >> stulist[k].name >> stulist[k].finalScore >> stulist[k].classScore >> stulist[k].isAdmin >> stulist[k].isWstu >> stulist[k].article;
		k++;
	}
	for (int m = 0; m < k; m++)
	{
		if (stulist[m].finalScore > 80 && stulist[m].article >= 1)
			stulist[m].money = stulist[m].money + 8000;
		if (stulist[m].finalScore > 85 && stulist[m].classScore > 80)
			stulist[m].money = stulist[m].money + 4000;
		if (stulist[m].finalScore > 90)
			stulist[m].money = stulist[m].money + 2000;
		if (stulist[m].finalScore > 85 && stulist[m].isWstu == 'Y')
			stulist[m].money = stulist[m].money + 1000;
		if (stulist[m].classScore > 80 && stulist[m].isAdmin == 'Y')
			stulist[m].money = stulist[m].money + 850;
	}
	int totmoney = 0;
	for (int s = 0; s < k; s++)
	{
		totmoney = totmoney + stulist[s].money;
	}
	int maxset = 0, maxscore = 0;
	//遍历从0-n-1
	for (int i = 0; i < 18; i++)
	{
		if (stulist[i].money > maxscore)
		{
			//更新最大值
			maxscore = stulist[i].money;
			//更新最大值下标
			maxset = i;
		}
	}
	cout << stulist[maxset].name << endl;
	cout << stulist[maxset].money << endl;
	cout << totmoney;
	return 0;
}