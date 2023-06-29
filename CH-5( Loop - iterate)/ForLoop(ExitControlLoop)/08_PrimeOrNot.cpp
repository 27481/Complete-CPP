#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    // A prime number are those numbers whic are divisible 1 and itself

    int n, i;
    cout << "Enter a number:";
    cin >> n;

    bool flag = true;
    for(i=2; i<=sqrt(n); i++){
        if(n%i==0){
        flag=false;
        break;
        }
    }
    if(flag==false){
    cout<<"Not a prime number"<<endl;
    }
    else{
        cout<<"give number\t"<<n<<"\t is a prime number:"<<endl;
    }
    

    return 0;
}
