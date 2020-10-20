#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x;
	while (cin >> x)
	{
		if (x < 1)cout << fixed << setprecision(2) << "y=" << x << endl;
		if (x >= 1 && x < 10)cout << fixed << setprecision(2) << "y=" << 2 * x - 1 << endl;
		if (x >= 10)cout << fixed << setprecision(2) << "y=" << 3 * x - 11 << endl;
	}
	return 0;
}