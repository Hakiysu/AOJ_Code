#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
	double n;
	cin >> n;
	cout << setprecision(3) << setiosflags(ios::fixed) << sin(n / 180 * 3.1415926) << " " << cos(n / 180 * 3.1415926);
}