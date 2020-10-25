#include<bits/stdc++.h>
using namespace std;
int main() {
	double N;
	double road=100;
	double height=50;
	cin >> N;
	for (int a = 0;a < N-1;a++)
	{
		road = road + height * 2;
		height = height / 2;
	}
	cout << fixed << setprecision(4) << road;
	return 0;
}