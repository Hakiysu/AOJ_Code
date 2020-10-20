#include <iostream>
using namespace std;
int main() 
{
	int a, b, c;
	cin >> a >> b;
	c = a - b;
	if (c == 0)
	{
		cout << "a == b";
	}
	else
	{
		if (c > 0)
		{
			cout << "a > b";
		}
		else
		{
			cout << "a < b ";
		}
	}
	return 0;
}