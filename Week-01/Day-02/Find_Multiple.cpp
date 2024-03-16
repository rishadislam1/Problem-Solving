#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int flag = 0;
    for(int i=a; i<=b; i++){
        if(i%c==0){
            flag=i;
            break;
        }
    }
    if(flag!=0){
        cout<<flag;
    }
    else{
        cout<<"-1";
    }
}