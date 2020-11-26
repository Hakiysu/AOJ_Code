#include<bits/stdc++.h>
using namespace std;
int main()
{
    //二维数组???
    int n;
    cin >> n;
    char ch;
    int a[4][13], j0 = 0, j1 = 0, j2 = 0, j3 = 0;
    fill(a[0], a[0] + 52, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> ch;
        if (ch == 'S')
        {
            cin >> a[0][j0];
            ++j0;
        }
        else if (ch == 'H')
        {
            cin >> a[1][j1];
            ++j1;
        }
        else if (ch == 'C')
        {
            cin >> a[2][j2];
            ++j2;
        }
        else
        {
            cin >> a[3][j3];
            ++j3;
        }

    }
    sort(a[0], a[0] + j0);
    sort(a[1], a[1] + j1);
    sort(a[2], a[2] + j2);
    sort(a[3], a[3] + j3);
    for (int i = 1, j = 0; i <= 13; i++)
    {
        if (a[0][j] != i)
            cout << "S " << i << endl;
        else
            ++j;
    }
    for (int i = 1, j = 0; i <= 13; i++)
    {
        if (a[1][j] != i)
            cout << "H " << i << endl;
        else
            ++j;
    }
    for (int i = 1, j = 0; i <= 13; i++)
    {
        if (a[2][j] != i)
            cout << "C " << i << endl;
        else
            ++j;
    }
    for (int i = 1, j = 0; i <= 13; i++)
    {
        if (a[3][j] != i)
            cout << "D " << i << endl;
        else
            ++j;
    }
    return 0;
}