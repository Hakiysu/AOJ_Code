#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ah, am, as, bh, bm, bs;
    while (cin >> ah >> am >> as >> bh >> bm >> bs)
    {
        int carry = 0;
        int cs = as + bs + carry;
        carry = cs / 60;
        int cm = am + bm + carry;
        carry = cm / 60;
        int ch = ah + bh + carry;
        cm %= 60;
        ch %= 24;
        cs %= 60;
        printf("%02d:%02d:%02d\n", ch, cm, cs);
    }
    return 0;
}