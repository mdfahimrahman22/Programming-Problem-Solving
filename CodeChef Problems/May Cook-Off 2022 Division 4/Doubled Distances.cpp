#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    for(int i=2; i<n; i++)
    {
        bool con1=(a[i-1]-a[i-2])*2==(a[i]-a[i-1]);
        bool con2=(a[i-1]-a[i-2])==(a[i]-a[i-1])*2;
        if(!con1&&!con2)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}
