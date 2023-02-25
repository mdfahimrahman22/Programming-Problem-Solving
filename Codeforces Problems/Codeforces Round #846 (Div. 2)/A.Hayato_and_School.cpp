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
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n+10];
        vector<int> oddIndex,evenIndex;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0)evenIndex.push_back(i+1);
            else oddIndex.push_back(i+1);
        }

        if(oddIndex.size()>=3){
            cout<<"YES"<<endl;
            cout<<oddIndex[0]<<' '<<oddIndex[1]<<' '<<oddIndex[2]<<endl;
            continue;
        }
        if(evenIndex.size()>=2 && oddIndex.size()>=1){
            cout<<"YES"<<endl;
            cout<<evenIndex[0]<<' '<<evenIndex[1]<<' '<<oddIndex[0]<<endl;
            continue;
        }

        cout<<"NO"<<endl;

    }
    
    

    return 0;
}