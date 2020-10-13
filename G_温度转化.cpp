#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double c, f;
	cin >> f;
	c = 5 * (f - 32) / 9;
	cout << setprecision(3) << setiosflags(ios::fixed) << c;
	return 0;
}