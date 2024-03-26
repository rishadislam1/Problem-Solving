#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int length;
        cin >> length;
        string s;
        cin >> s;
        int flag = 0;
        if (length == 5)
        {
            for (char c : s)
            {
                if (c == 'T')
                {
                    flag = 1;
                }
                if (isupper(c) && c!='T'){
                    flag = 0;
                }
            }
        }
        if (flag == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}