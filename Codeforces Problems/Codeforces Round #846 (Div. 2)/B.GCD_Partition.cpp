#include <bits/stdc++.h>
#define fastIo                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main()
{
    fastIo;
    freopen("input.txt","r",stdin);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<unsigned int> a(n+10);
        unsigned int sum[n+10]={0};
        unsigned int k=n/2;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        cout<<k<<endl;

    }
    

    return 0;
}