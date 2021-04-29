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
        ll r,b,d;
        cin>>r>>b>>d;
        ll mini=(r<b)?r:b;
        ll maxi=(r>b)?r:b;
        if(d==0)
        {
            if(b==r)
            {
                cout<<"YES\n";
            }
            else
            {
                cout<<"NO\n";
            }
        }
        else
        {
            if(((d+1)*mini)<maxi)
            {
                cout<<"NO\n";
            }
            else
            {
                //cout<<float(maxi/(d+1.0))<<" "<<mini<<endl;
                cout<<"YES\n";
            }
        }

    }



    return 0;
}
