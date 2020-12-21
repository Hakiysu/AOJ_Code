#include<bits/stdc++.h>
using namespace std;
int main(){
	//R=real,F=fake
	int zR[256]={0};
	int zF[256]={0};
	int t;
	int s=0;
	cin>>t;
	int tk=t;
	while(t--)
	{
		cin>>zR[s]>>zF[s];
		s++;
	}
	int totR=0,totF=0;
	for(int k=0;k<tk;k++)
	{
		totR=totR+zR[k];
		totF=totF+zF[k];
	}
	cout<<totR<<"+"<<totF<<"i";
	return 0;
}