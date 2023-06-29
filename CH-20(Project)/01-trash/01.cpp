#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        int x,y,z;
        cin>>x>>y>>z;

        int sx,sy,sz;

        sx=400/x;
        sy=400/y;
        sz=400/z;

        if(sx>sy && sx>sz)
        cout<<"ALICE"<<endl;
        else if(sy>sx && sy>sz)
        cout<<"BOB"<<endl;
        else if(sz>>sx && sz>>sy)
        cout<<"CHARLIE"<<endl;
    }
    return 0;
}
