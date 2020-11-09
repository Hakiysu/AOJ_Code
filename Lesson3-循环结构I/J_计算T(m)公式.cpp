#include<bits/stdc++.h>
using namespace std;
int main() {
	double t=1;//累加器
	double m;
	cin >> m;
	for (double c = 2;c <= m;c++)
	{
		t = t - 1 / (c*c);
	}
	cout <<fixed<<setprecision(6)<< t;
	return 0;
}