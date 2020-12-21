#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    char a[100] = { '\0' }, max;
    while (cin>>a)
    {
        max = a[0];
        for (i = 1;i <= 99;i++)
            if (a[i] > max)
                max = a[i];
        for (i = 0;i <= 99;i++)
        {
            if (a[i] == '\0')break;
            cout << a[i];
            if (a[i] == max)cout << "(max)";
        }
        cout << endl;
        memset(a, '\0', sizeof(a));
    }
    return 0;
}