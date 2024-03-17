#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, m;
    cin >> n >> m;
    long long arrA[n], arrB[m];
    for (long long i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (long long i = 0; i < m; i++)
    {
        cin >> arrB[i];
    }
    long long l = 0, r = 0, k = 0, marge[n + m];

    while (l < n && r < m)
    {
        if (arrA[l] < arrB[r])
        {
            marge[k] = arrA[l];
            l++;
            k++;
        }
        else
        {
            marge[k] = arrB[r];
            r++;
            k++;
        }
    }

    while (l < n)
    {
        marge[k] = arrA[l];
        k++;
        l++;
    }
    while (r < m)
    {
        marge[k] = arrB[r];
        k++;
        r++;
    }

    for (int i = 0; i < n + m; i++)
    {
        cout << marge[i] << " ";
    }
}