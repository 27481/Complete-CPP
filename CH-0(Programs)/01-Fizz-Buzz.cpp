#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
	// when the num is divisble by 3 the child says fizz in instead of number
	// when the number is divisible by 5 the child says buzz
	// when the number is divisble by both 3 and 5 child says fizz-buzz

	for(int i=1; i<100; i++){
    if(i%3==0&&i%5==0) cout<<"Fizz-Buzz"<<endl;
	if(i%3==0) cout<<"Fizz"<<endl;
    else if(i%5==0) cout<<"Buzz"<<endl;
    else if(i%3==0&&i%5==0) cout<<"Fizz-Buzz"<<endl;
	else cout<<i<<endl;
	}
    return 0;
  }