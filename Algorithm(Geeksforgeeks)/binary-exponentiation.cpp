#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;

//Also called fast exponentiation
ll binpow_rec(int a,int b)
{
    if(b==0)return 1;
    ll res=binpow_rec(a,b/2);
    if(b%2!=0)
    {
        return res*res*a;
    }
    else
    {
        return res*res;
    }
}

ll binpow(int a, int b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
        {
            res=res*a;
        }
        a=a*a;
        b>>=1;
    }

    return res;
}


int main()
{
    fastIo

    ll res=binpow(3,13);
    cout<<res<<endl;


    return 0;
}
