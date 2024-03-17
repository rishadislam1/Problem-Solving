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
    long long l = 0, r = 0;
    while (r < m)
    {
        while (arrB[r] >= arrA[l] && l < n)
        {
            cout << arrA[l] << " ";
            l++;
        }
        cout<<arrB[r]<<" ";
        r++;
    }
}