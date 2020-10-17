#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
	int n,a;
	cin >> n;
	a = n % 2;
	if (a== 0)
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}
}