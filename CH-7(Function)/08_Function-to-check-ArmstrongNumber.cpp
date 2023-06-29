#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int nDigits(int);
bool isArmstrong(int);

int nDigits(int n){
    int count=0;
    while (n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}

bool isArmstrong(int n){
    int count = nDigits(n);

    int sum = 0;
    int temp = n;

    while(n>0){
        int r=n%10;
        sum += pow(r, count);
    }
    return temp==sum;
}


int main(){
    int n;
    for(int i=1; n<=100; ++n){
        if(isArmstrong(n)){
            cout<<n<<endl;
        }
    }
    return 0;
}
