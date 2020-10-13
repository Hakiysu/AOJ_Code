#include <iostream>
using namespace std;
int main()
{
	int a, b, x, y;
	cin >> a;
	x = (a-a % 100)/100;
	y = (a % 100) / 10;
	b = x + y * 10;
	cout << b;
}