#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll s,v,p,sale[n+10];
        for(ll i=0; i<n; i++)
        {
            cin>>s>>p>>v;
            sale[i]=int(p/(s+1))*v;
        }
        cout<<*max_element(sale,sale+n)<<endl;
    }
    return 0;
}

