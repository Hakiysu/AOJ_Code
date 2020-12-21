#include<bits/stdc++.h>
using namespace std;
void Matrix()
{
    const int size = 20; // 矩阵大小
    int matrix[size][size] = { 0 };
    int limitMatrix;
    cin >> limitMatrix;

    int row = 0;
    int col = 0;
    int start = 1; // 起始值
    int temp = limitMatrix;
    for (int count = 0; count < size / 2; count++) // size阶的矩阵可以画size/2个圈
    {
        for (; col < temp - 1; col++) // a排赋值
            matrix[row][col] = start++;
        for (; row < temp - 1; row++) // b排赋值
            matrix[row][col] = start++;
        for (col = temp - 1; col > count; col--) // c排赋值
            matrix[row][col] = start++;
        for (row = temp - 1; row > count; row--) // d排赋值
            matrix[row][col] = start++;

        // 进入下一圈
        temp--;
        row++;
        start -= 1; // 这里-1是因为在换圈的时候会多加1
    }
    if (limitMatrix % 2 == 1) {
        matrix[(limitMatrix - 1) / 2][(limitMatrix - 1) / 2] = limitMatrix * limitMatrix;
    }
    // 输出数组
    for (int i = 0; i < limitMatrix; i++)
    {
        for (int j = 0; j < limitMatrix; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main(int argc, char** argv)
{
    Matrix();
    return 0;
}