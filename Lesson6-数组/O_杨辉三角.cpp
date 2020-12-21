#include<bits/stdc++.h>
using namespace std;
int n, i, j, k, a[15][15];
int main() {
    const int n = 11;//limit
    int i, j, a[n][n];
    int limitLine;
    cin >> limitLine;
    for (i = 1;i < n;i++)//使第一列和对角线的值为1
    {
        a[i][i] = 1;//使最右侧边全为1
        a[i][1] = 1;//使最左侧边全为1
    }
    //从第三行开始处理
    for (i = 3;i < n;i++)
    {
        for (j = 2;j <= i - 1;j++) 
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];//plus
        }
    }
    for (i = 1;i < limitLine+1;i++)//从第一行开始
    {
        for (j = 1;j <= i;j++)//输出每一行的数字
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}