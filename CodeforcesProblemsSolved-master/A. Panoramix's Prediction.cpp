#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {

            return 0;
        }

    }
    return 1;
}

int main()
{
    int x,y;
    cin>>x>>y;
    int nextPrime=x;
    for(int i=x+1;; i++)
    {
        if(isPrime(i))
        {

            nextPrime=i;
            break;
        }
    }

    if(nextPrime==y)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }



    return 0;
}
