#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, s;
    int sum = 0;
    cin >> k >> s;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int p = 0; p <= k; p++)
            {
                if (i + j + p == s)
                {
                    sum++;
                }
            }
        }
    }
    cout << sum;
}