#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    fastIo;
    // freopen("input.txt","r",stdin);
    int t,x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        int ans=x*10/100+y;
        cout<<ans<<endl;

    }
    

    return 0;
}