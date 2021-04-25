#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    ll n;
    cin>>n;
    ll a[n+10]= {0};
    ll b[n+10]= {0};
    for(ll i=0; i<n; i++)cin>>a[i];
    sort(a,a+n);
    for(int i=0,j=n; i<n; i++,j--)b[i]=a[i]*j;

    cout<<*max_element(b,b+n)<<endl;
    return 0;
}

