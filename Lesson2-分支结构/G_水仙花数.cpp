#include <iostream>
using namespace std;
int main(){
	int n,a,b,c;
	while(cin>>n)
	{
		if(n==0)break;
		a=(n-n%100)/100;
		c=(n-a*100)%10;
		b=(n-a*100-c)/10;
		if(n==a*a*a+b*b*b+c*c*c)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
	
	return 0;
}