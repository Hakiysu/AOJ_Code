#include <bits/stdc++.h>
using namespace std;
struct R
{
    int num, len, wid;
};
const int maxn = 1000;
R r[maxn];
int n, T;
bool cmp(R a, R b)
{
    if (a.num != b.num)
        return a.num < b.num;
    if (a.len != b.len)
        return a.len < b.len;
    return a.wid < b.wid;
}
int main()
{
    for (cin >> T; T--;)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> r[i].num >> r[i].len >> r[i].wid;
        }
    }
    cout << r[0].num << " " << r[0].len << " " << r[0].wid << endl;
    sort(r, r + n, cmp);
    for (int i = 1; i < n; i++)
    {
        if (r[i].len < r[i].wid)
            swap(r[i].len, r[i].wid);
        if (r[i].num == r[i - 1].num && r[i].len == r[i - 1].len && r[i].wid == r[i - 1].wid)
            continue;
        cout << r[i].num << " " << r[i].len << " " << r[i].wid << endl;
    }
    return 0;
}