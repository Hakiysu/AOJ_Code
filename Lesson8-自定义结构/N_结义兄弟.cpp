#include <bits/stdc++.h>
using namespace std;
struct Person
{
	char name[100];
	int y, m, d;
};
const int maxn = 1000 + 10;
Person p[maxn];
int n;
bool cmp(Person a, Person b)
{
	if (a.y != b.y)
		return a.y < b.y;
	if (a.m != b.m)
		return a.m < b.m;
	return a.d < b.d;
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> p[i].name >> p[i].y >> p[i].m >> p[i].d;
	sort(p, p + n, cmp);
	for (int i = 0; i < n; i++)
		cout << p[i].name << endl;
	return 0;
}
