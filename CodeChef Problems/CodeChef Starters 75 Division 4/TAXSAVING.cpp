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
    
    int t,x,tax;
    cin>>t;
    while(t--){
        cin>>x>>tax;
        int invest=x-tax;
        
        cout<<invest<<endl;
    }

    return 0;
}