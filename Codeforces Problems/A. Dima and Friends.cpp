#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
    //freopen("abc.txt","r",stdin);
    int n,x;
    cin>>n;
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>x;
        sum+=x;
    }
    int ans=0;
    for(int i=1; i<=5; i++)
    {
        if((sum+i)%(n+1)!=1)
        {
            ans++;
        }

    }
    cout<<ans<<endl;

    return 0;
}
