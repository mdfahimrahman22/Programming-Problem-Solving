#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    int n;
    cin>>n;
    long long int ans=0;
    for(int i=1;i<=n;i++){
        ans+=i;
    }
    cout<<ans<<endl;
    return 0;
}

