#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int power(int a,int n)
{
    if(n==0)return 1;
    else if(n==1)return a;
    else
    {
        int r=power(a,n/2);
        if(n%2==0)return r*r;
        else return r*a*r;
    }
}

int main()
{
    fastIO
    cout<<power(5,2)<<endl;




    return 0;
}
