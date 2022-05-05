#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;

void solve()
{
    int x,y;
    cin>>x>>y;
    if(y%x!=0)
    {
        cout<<"0 0"<<endl;
        return;
    }
    int z=y/x;
    if(z==1)
    {
        cout<<"1 1"<<endl;
        return;
    }
    else
    {
        cout<<1<<" "<<z<<endl;
        return;
    }
}
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
