#include<bits/stdc++.h>
using namespace std;
int main() {
	int a;
	int all[10] = { 0 };//n
	int leg[10] = { 0 };//m
	int rabbit[10] = { 0 };
	int chicken[10] = { 0 };
	cin >> a;
	if (a < 10)
	{
		for (int num_in = 1;num_in <= a;num_in++)//NumG in
		{
			cin >> all[num_in] >> leg[num_in];
			if (num_in == a)break;
		}

		for (int nub_give = 1;nub_give <= a;nub_give++)//计算
		{
			rabbit[nub_give] = (leg[nub_give] - 2 * all[nub_give]) / 2;
			chicken[nub_give] = all[nub_give] - rabbit[nub_give];
			if (nub_give == a)break;
		}

		for (int nub_out = 1;nub_out <= a;nub_out++)//NumG out
		{
			if (rabbit[nub_out] < 0||chicken[nub_out]<0)
			{
				cout << "No answer" << endl;
			}
			else {
				cout << chicken[nub_out] << " " << rabbit[nub_out] << endl;
			}
			if (nub_out == a )break;
		}

	}
	
	return 0;
}