#include <iostream>
using namespace std;
int main()
{
	char op;
	int a, b, c;
	while (cin >> a >> op >> b)
	{
		if (op == '?')break;
		if (op == '+')c=a+b;
		if (op == '-')c=a-b;
		if (op == '*')c=a*b;
		if (op == '/')c=a/b;
		cout << c<<endl;
	}
	return 0;
}