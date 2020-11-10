#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int func(ll a[],int n,ll k)
{
    int cnt=0;
    sort(a,a+n);
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(a[j]-a[i]<k)
                continue;
            if(a[j]-a[i]>=k)
            {
                cnt+=n-j;
            break;
            }
        }
    }
    return cnt;
}
int main()
{
    //freopen("abc.txt","r",stdin);
    int n,c=0;
    ll k;
    cin>>n>>k;
    ll a[n+10];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    cout<<func(a,n,k)<<endl;




    return 0;
}
