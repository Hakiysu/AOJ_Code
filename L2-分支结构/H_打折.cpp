#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	int price=95;
	double money_before;
	double money_after;
	cin>>n;
	money_before=n*price;
	if(money_before>=300)
	{
		money_after=money_before*0.85;
	}
	else
	{
		money_after=money_before;
	}
	cout<<setprecision(2)<<fixed<<money_after;
	return 0;
}