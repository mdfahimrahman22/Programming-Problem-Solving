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
    
    int n,a,b;
    cin>>n>>a>>b;
    cout<<n-a<<" "<<n-a-b<<endl;
    return 0;
}