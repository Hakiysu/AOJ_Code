#include <iostream>
using namespace std;
int main()
{
	int a, b, x, y;
	cin >> a >> b;
	x = a;
	y = b;
	a = y;
	b = x;
	cout << a << " " << b;
	return 0;
}