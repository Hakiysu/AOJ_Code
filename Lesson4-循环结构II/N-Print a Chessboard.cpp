#include<bits/stdc++.h>
using namespace std;
int main() {
	int h,w;
	while(cin>>h>>w) {
		if(h==0||w==0)break;
		for(int y=1; y<=h; y++) 
		{
			if(y%2==1) 
			{
				for(int x=1; x<=w; x++) 
				{
					if(x%2==1)cout<<"#";
					else cout<<".";
				}
				cout<<endl;	
			}
			else
			{
				for(int xt=0; xt<w; xt++) 
				{
					if(xt%2==1)cout<<"#";
					else cout<<".";
				}
				cout<<endl;
			}
			
		}
		cout<<endl;
	}
	return 0;
}