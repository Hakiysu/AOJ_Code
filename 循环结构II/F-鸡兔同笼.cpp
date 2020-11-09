#include<bits/stdc++.h>
using namespace std;
int main() {
	int a, chicken, rabbit, leg, all;
	cin >> a;
	while (a)
	{
		a--;
		cin >> all >> leg;
		rabbit = (leg - 2 * all) / 2;
		chicken = all - rabbit;
		if (rabbit < 0 || chicken < 0||leg%2)
		{
			cout << "No answer" << endl;
		}
		else
		{
			cout << chicken << " " << rabbit << endl;
		}
	}

		return 0;
}