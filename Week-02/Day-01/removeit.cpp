#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    v.erase(remove(v.begin(), v.end(), x), v.end());
    for (auto it = v.begin(); it != v.end();
         it++)
        cout <<*it << ' ' ;
}