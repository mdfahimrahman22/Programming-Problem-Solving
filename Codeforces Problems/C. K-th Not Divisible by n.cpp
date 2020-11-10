#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef unsigned long long int ll;
int main()
{
    fast
    //freopen("abc.txt","r",stdin);

    ll n,k,m;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        cout<<(k-1)/(n-1)+k<<endl;
    }


    return 0;
}
