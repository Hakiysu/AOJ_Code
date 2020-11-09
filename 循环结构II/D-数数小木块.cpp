#include<bits/stdc++.h>
using namespace std;
int main() {
	int m[10];//存储需要计算的数字的数组
	int N;//总共要算几个数
	cin >> N;
	for (int numg_in = 1;numg_in < 11;numg_in++)//NumG in
	{
		cin >> m[numg_in];
		if (numg_in >= N)break;
	}

	for (int k = 1;k <= N;k++)
	{
		int num_floor = m[k];
		int all = 0;
		int every_floor = 0;
		for (int amount_everyFloor = 1;amount_everyFloor <= num_floor;amount_everyFloor++)
		{
			every_floor = every_floor + amount_everyFloor;
			all = all + every_floor;
			if (amount_everyFloor == num_floor)cout << all<<endl;
		}

	}
	return 0;
}