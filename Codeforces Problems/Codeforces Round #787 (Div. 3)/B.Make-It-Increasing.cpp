#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long int ll;
void printVector(vector<int> v)
{
    for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
    cout<<endl;
}
void solve()
{
    ll n;
    cin>>n;
    vector<int> v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    if(n==1)
    {
        cout<<0<<endl;
        return;
    }

    int count=0,zero=0;
    for(int i=n-1; i>=1; i--)
    {


        while(v[i]<=v[i-1])
        {
            v[i-1]=v[i-1]>>1;
            count++;
            if(v[i-1]==0)
            {
                break;
            }
        }

    }
    if(v[1]==0)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<count<<endl;
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
