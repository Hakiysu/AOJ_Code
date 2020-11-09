#include <bits/stdc++.h>
using namespace std;
int main() {
	int a,b,c,n;
	while(cin>>a>>b>>c) 
	{
		n=(a*70+b*21+c*15)%105;
		if(n>100||n <10)
		{
		cout<<"No answer"<<endl;
		}
		else
		{
		cout<<n<<endl;
		}
	}
  return 0;
}