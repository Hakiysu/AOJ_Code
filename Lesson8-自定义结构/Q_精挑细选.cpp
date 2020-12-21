#include <bits/stdc++.h>
using namespace std;
struct Pipe
{
    int length;
    int diameter;
    int number;
};
Pipe pipes[1000];
int n;
bool cmp(Pipe a, Pipe b)
{
    if (a.length != b.length)
        return a.length > b.length;
    if (a.diameter != b.diameter)
        return a.diameter < b.diameter;
    return a.number > b.number;
}
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 0; i < n; i++)
            cin >> pipes[i].length >> pipes[i].diameter >> pipes[i].number;
        sort(pipes, pipes + n, cmp);
        cout << pipes[0].number << endl;
    }
    return 0;
}