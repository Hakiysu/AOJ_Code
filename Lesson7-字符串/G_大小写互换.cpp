/*
:(
i feel sad.
R.I.P.
The G code。

#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	while (n)
	{
		if (n > 10)break;
		char tempText[4096];
		cin >> tempText;
		for (int i = 0;i < sizeof(tempText);i++)
		{
			if (tempText[i] >= 'a' && tempText[i] <= 'z')
				cout << char(toupper(tempText[i]));
			if (tempText[i] >= 'A' && tempText[i] <= 'Z')
				cout << char(tolower(tempText[i]));
		}
		cout << endl;
		n--;
	}
	return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int times2quit, i, j;
    cin >> times2quit;
    string a;
    while (times2quit--) 
    {
        cin >> a;
        j = a.length();
        for (i = 0; i < j; i++) 
        {
            if (a[i] >= 'a' && a[i] <= 'z')a[i] = a[i] - 32;
            else a[i] += 32;
        }
        cout << a << endl;
    }
    return 0;
}