#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	while(cin >> n)
	{
		int peach = 1;
		
		for (int day = 1;day < n;day++)
		{
			peach = (peach + 1) * 2;
		}
		cout << peach<<endl;
	}
	return 0;
}