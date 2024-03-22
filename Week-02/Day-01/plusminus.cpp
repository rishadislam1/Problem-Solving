#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            cout << "+" << endl;
        }
        else
        {
            cout << "-" << endl;
        }
    }
}