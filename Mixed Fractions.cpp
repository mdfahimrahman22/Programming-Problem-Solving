#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,d;
cin>>n>>d;
int wholeNumber=n/d;
int numerator=n%d;
int denominator=d;
cout<<wholeNumber<<" "<<numerator<<" "<<denominator<<endl;
    return 0;
}

