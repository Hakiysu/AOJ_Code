#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, b, c, averange;
	cin >> a >> b >> c;
	averange = (a + b + c) / 3;
	cout << setprecision(3) << setiosflags(ios::fixed) << averange;
	return 0;
}