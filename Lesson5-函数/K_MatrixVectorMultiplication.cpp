#include <iostream>
using namespace std;
int main() {
    int m, n, t;
    cin >> m >> n;
    int a1[128][128], a2[128];
    for (int a = 0; a < m; ++a) {
        for (int b = 0; b < n; ++b) {
            cin >> t;
            a1[a][b] = t;
        }
    }
    for (int a = 0; a < n; ++a) {
        cin>>t;
        a2[a] = t;
    }
    for (int i = 0; i < m; ++i) {
        int sum = 0;
        for (int k = 0; k < n; ++k) {
            sum += a1[i][k] * a2[k];
        }
        cout << sum << endl;
    }
}