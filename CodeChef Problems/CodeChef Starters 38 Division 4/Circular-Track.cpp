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
    
    int t;
    long long int a,b,m;
    cin>>t;
    while(t--){
        cin>>a>>b>>m;
        int dis1=abs(b-a);
        int dis2=m - abs(a-b);
        cout<<min(dis1,dis2)<<endl;
    }

    return 0;
}