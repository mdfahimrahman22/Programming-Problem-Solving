#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n;
    cin>>n;
    unsigned long long int temp1=0,temp2=1,fib=0;
    if(n==1)
    {
        cout<<1<<endl;
    }
    for(int i=2; i<=n; i++)
    {
        fib=temp1+temp2;
        temp1=temp2;
        temp2=fib;
        if(i==n)
            cout<<fib<<endl;
    }

    return 0;
}
