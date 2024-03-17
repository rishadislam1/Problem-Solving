#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    long long sum = 0, ans = 0;
    while (r < n)
    {
        sum += arr[r];
        if ((r - l + 1) == k)
        {
            ans = max(ans, sum);
            sum -= arr[l];
            l++;
            r++;
        }
        else
        {
            r++;
        }
    }
    cout<<ans;
}