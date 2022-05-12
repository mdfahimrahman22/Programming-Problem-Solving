#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef unsigned long long int ll;
class SWEET
{
public:
    ll cost,cashback,diff;
    SWEET() {}
    SWEET(ll c, ll cb)
    {
        cost=c;
        cashback=cb;
        diff=c-cb;
    }
};
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);
    int t,n;
    ll r;
    cin>>t;
    while(t--)
    {
        cin>>n>>r;
        ll costs[n],cashbacks[n];
        for(int i=0; i<n; i++)cin>>costs[i];
        for(int i=0; i<n; i++)cin>>cashbacks[i];

        vector<SWEET> sweets;
        for(int i=0; i<n; i++)
        {
            sweets.push_back(SWEET(costs[i],cashbacks[i]));
        }
        sort(sweets.begin(),sweets.end(),[](const auto& lhs,const auto& rhs)
        {
            return lhs.diff<rhs.diff;
        });
        int total_sweets=0;
        for(int i=0; i<n; i++)
        {

            int num_of_sweets=floor(r/sweets[i].cost);
            r=r-num_of_sweets*sweets[i].diff;
            total_sweets+=num_of_sweets;
            if(r==0)break;
            if(r>=sweets[i].cost)
            {
                i--;
                continue;
            }
        }
        cout<<total_sweets<<endl;
    }
    return 0;
}
