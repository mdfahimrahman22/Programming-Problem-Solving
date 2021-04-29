#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int t;
    cin>>t;

    while(t--)
    {
        ll r,c,k;
        cin>>r>>c>>k;
        ll mini=(r<c)?r:c;
        ll maxi=(r>c)?r:c;
        int x=(mini-1)+mini*(maxi-1);
        if(x!=k)
        {
            cout<<"NO\n";
        }
        else
        {
            cout<<"YES\n";
        }

    }



    return 0;
}
