#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,f;
	int d,r;
	cin>>a>>b;
	d=a/b;
	r=fmod(a,b);
	f=a/b;
	cout<<fixed<<setprecision(0)<<d<<" "<<r<<" ";
	cout<<fixed<<setprecision(5)<<f;
	
	return 0;
}