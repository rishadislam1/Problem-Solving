#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int possible1 = a+(a-1);
    int possible2 = b+(b-1);
    int possible3 = a+b;

    int maximum = possible1;

    if(maximum<possible2){
        maximum = possible2;
    }

    if(maximum < possible3){
        maximum = possible3;
    }

    cout<<maximum;
}