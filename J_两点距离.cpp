#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
	double x1, y1, x2, y2, x2y;
	cin >> x1 >> y1 >> x2 >> y2;
	double x = pow(x1 - x2, 2);
	double y = pow(y1 - y2, 2);
	x2y = x + y;
	cout << setprecision(3) << setiosflags(ios::fixed) << pow(x2y,0.5);
}