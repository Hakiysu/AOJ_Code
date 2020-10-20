#include <iostream>
using namespace std;
int main(){
	int t;
	while(cin>>t)
	{
	    if(t<=100 && t>=90)cout<<"A"<<endl;
	    if(t<=89 && t>=80)cout<<"B"<<endl;
	    if(t<=79 && t>=70)cout<<"C"<<endl;
	    if(t<=69 && t>=60)cout<<"D"<<endl;
	    if(t<=59 && t>=0)cout<<"E"<<endl;
	    if(t>100 || t<0)cout<<"Score is error!"<<endl;
	}
	
	return 0;
}