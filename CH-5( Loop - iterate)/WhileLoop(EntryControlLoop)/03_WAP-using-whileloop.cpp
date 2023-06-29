#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int sum=0;
    int flag=0;

    cout << "Enter the number upto which you want to find out the sum:\n";
    cin >> n;

    while (n!=0)
    {
        sum=sum+n;
        flag++;
        cout<<"Sum of"<<n<<"is"<<sum<<endl;
    }
    cout<<"Sum of" << n << "is"<<sum<<endl;
    cout<<"Number of iterations are"<<n<<"is"<<flag<<endl;

    double avg=sum/flag;

    return 0;
}
