#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+10];
    map<int,int> mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(mp[a[i]]>=3)
        {
            cout<<a[i]<<endl;
            return;
        }
    }
    cout<<-1<<endl;

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
