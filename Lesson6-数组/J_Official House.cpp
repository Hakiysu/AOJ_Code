#include<bits/stdc++.h>
using namespace std;
int main()
{
    //b号楼第f层房间r入住了v个人
    //输入N组数字
    //4栋楼，3层，10个房间
    //b:0~3
    //f:0~2
    //r:0~9
    int n[4][3][10] = { 0 };//三维数组+初始化为0，即一开始房子里无人居住
    int N;
    cin >> N;//有几组信息
    for(int datain=1;datain<=N;datain++)//输入入住信息
    {
        int b, f, r, v;
        cin >> b >> f >> r >> v;
        n[b - 1][f - 1][r - 1] = n[b - 1][f - 1][r - 1] + v;//更改房间状态（即修改人数为num）
    }
    for (int b = 0; b < 4; b++)//输出列表
    {
        for (int f = 0; f < 3; f++)
        {
            cout << " ";
            for (int r = 0; r < 10; r++)
                cout << n[b][f][r] << " ";
            cout << endl;
        }
        if (b == 3)break;
        cout << "####################" << endl;
    }
    return 0;
}