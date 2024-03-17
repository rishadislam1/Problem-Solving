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
    long long ans = 0;
    while (l < n && r < m)
    {
        int count1 = 0, count2 = 0, curr = arrA[l];
        while (arrA[l] == curr && l < n)
        {
            count1++;
            l++;
        }
        while (curr > arrB[r] && r < m)
        {
            r++;
        }
        while (arrB[r] == curr && r < m)
        {
            count2++;
            r++;
        }
        ans += (1LL * count1 * count2);
    }
    cout << ans;
}