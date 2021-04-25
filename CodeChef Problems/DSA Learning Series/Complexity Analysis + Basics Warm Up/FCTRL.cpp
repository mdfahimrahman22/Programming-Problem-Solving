#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int ll;
int main()
{
    fastIo
    freopen("input.txt","r",stdin);
    int t;
    ll n,ans;
    cin>>t;
    while(t--)
    {

        cin>>n;
        ans=n/25;
        int di=2,digit=log10(n)+1;
        for(;di<digit;di++){
            ans+=9*di;
        }

//        for(; di<digit;)
//        {
//            int x=n/10;
//            if(x/100==0)
//            {
//                ans+=(x/10)*(di+1);
//                break;
//            }
//            if(x!=0)
//            {
//                ans+=9*di;
//                di++;
//
//
//            }
//            else
//            {
//                break;
//            }
//
//        }
        cout<<ans<<endl;


    }
    return 0;
}
