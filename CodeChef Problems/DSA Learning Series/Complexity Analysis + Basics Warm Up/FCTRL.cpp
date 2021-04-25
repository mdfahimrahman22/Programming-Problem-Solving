#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int t;
    ll n,ans;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ll ans=0,x=0,num2=0,num5=0;
        num2=n/2;

        for(ll j=5; j<=n; j*=5)
        {
            num5+=n/j;
        }

        ans+=(num2<num5)?num2:num5;
        cout<<ans<<endl;

    }
    return 0;
}
