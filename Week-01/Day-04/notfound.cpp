#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    string found;
    int flag = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (a.find(i) > 10e5)
        {
            found = i;
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << found;
    }
    else
    {
        cout << "None";
    }
}