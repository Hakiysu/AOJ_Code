#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    bool flag = true;
    cin >> n;
    while (flag)
    {
        if (n & 1)
        {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = 3 * n + 1;
            if (n == 1)
                flag = false;
        }
        else
        {
            cout << n << "/2=" << n / 2 << endl;
            n /= 2;
            if (n == 1)
                flag = false;
        }
    }
    return 0;
}