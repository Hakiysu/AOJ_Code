#include <bits/stdc++.h>
using namespace std;
int main() {
	double n;
	while(cin>>n) 
	{
		double H=0;
		for (double a=1; a<=n; a++) 
		{
			H=H+1/a;
		}
		cout<<fixed<<setprecision(3)<<H<<endl;
	}
	return 0;
}