#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arrA[n], arrB[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }
    int l = 0;
    int r = 0;
    while (r < m)
    {
        while (l <= r)
        {
            if (arrA[l] <= arrB[r])
            {
                cout << arrA[l];
                l++;
            }
        }
    }
}