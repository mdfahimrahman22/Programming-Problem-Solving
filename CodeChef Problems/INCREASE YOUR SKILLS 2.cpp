#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIO
//    freopen("input.txt","r",stdin);
    unsigned long int psum=0,exsum=0,lsum;
    int t, a,d,k,n,inc;
    cin>>t;
    while(t--)
    {
        cin>>a>>d>>k>>n>>inc;
        int x=1;
        psum=a;
        for(int i=1; i<=n; i++)
        {
            if(i%k==0)
            {
                d+=inc;
            }
            if(i!=n)
                psum+=d;

        }
        cout<<psum<<endl;
    }
    return 0;
}
