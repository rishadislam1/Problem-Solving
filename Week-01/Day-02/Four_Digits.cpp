#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int digitCount = log10(n)+1;
    if(digitCount<4 && digitCount>2){
        cout<<0<<n;
    }
    else if(digitCount<3 && digitCount>1){
        cout<<"00"<<n;
    }
    else if(digitCount<2){
        cout<<"000"<<n;
    }
    else{
        cout<<n;
    }
}