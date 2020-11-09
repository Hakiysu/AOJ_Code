#include <bits/stdc++.h>
using namespace std;
int main() {
	double n,m;
	while(cin>>n>>m) {
		double plus=0;
		for(double a=n; a<=m; a++) {
			plus=plus+1/(a*a);
		}
		cout<<fixed<<setprecision(5)<<plus<<endl;
	}

	return 0;
}