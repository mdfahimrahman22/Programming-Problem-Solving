#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
//    freopen("input.txt","r",stdin);

    int t;
    cin>>t;
    unsigned long long int n,x,n_half,partner;
    while(t--)
    {
        cin>>n>>x;
        n_half=n/2;
        if(x<=n_half)
        {
            partner=n*2-x+1;
        }
        else
        {
            partner=2*n-x+1;
        }

        cout<<partner<<endl;
    }

    return 0;
}
