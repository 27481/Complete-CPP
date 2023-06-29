#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    cin>>n;

    while(n--){
        int a,b,c;
        cin>>a>>b>>c;

        int sum;

        sum=a+b+c;

        if(sum==1) cout<<1<<endl;
        else if(sum==0) cout<<0<<endl;
        else if(sum==2) cout<<2<<endl;
        else if(sum==3) cout<<3<<endl;
    }
    return 0;
}
