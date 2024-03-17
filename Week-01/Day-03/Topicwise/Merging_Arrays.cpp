#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
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
    int l = 0, r = 0;
    while (r < m)
    {
        while (arrB[r] > arrA[l] && l < n)
        {
            cout << arrA[l] << " ";
            l++;
        }
        cout<<arrB[r]<<" ";
        r++;
    }
}