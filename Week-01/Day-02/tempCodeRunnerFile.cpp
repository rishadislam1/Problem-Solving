#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digitCount = log10(n)+1;
    if(digitCount<4){
        cout<<0<<n;
    }
    else{
        cout<<n;
    }
}