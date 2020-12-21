#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b)
{
	return b == 0 ? a : gcd(b, a % b);
}
struct Fraction
{
	ll up;
	ll down;
};
void simplify(Fraction &f)
{
	int g = gcd(f.up, f.down);
	f.up /= g;
	f.down /= g;
}
void input(Fraction &f)
{
	cin >> f.up >> f.down;
	simplify(f);
}
void print(Fraction f)
{
	cout << f.up << " " << f.down;
}
Fraction add(Fraction &a, Fraction &b)
{
	Fraction c;
	c.up = a.up * b.down + a.down * b.up;
	c.down = a.down * b.down;
	simplify(c);
	return c;
}
int main()
{
	Fraction a, b;
	int T;
	cin >> T;
	while (T--)
	{
		input(a);
		input(b);
		print(add(a, b));
		cout << endl;
	}
	return 0;
}