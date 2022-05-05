#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n+10];
    for(int i=0; i<n; i++)cin>>a[i];
    bool first_even=a[0]%2;
    for(int i=0; i<n; i+=2)
    {
        if(a[i]%2!=a[0]%2){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=1; i<n; i+=2)
    {
        if(a[i]%2!=a[1]%2){
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
    {
        solve();
    }
    return 0;
}
