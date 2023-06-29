#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    // This rand() function in cpp will generate same random integer because its algorithm is based on seed which is generated only once in the prograam

  // so to counter this we will use time as seed 
  int n;
  cout<<"How many numbers you want to print"<<endl;

  // taking current time as seed for random number 
  srand(time(0));

  cin>>n;
  for(int i=0; i<n; i++){
    cout<<rand()/100<<endl;
  }

  return 0;
}