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
        int dif=y-x;
        if(dif==0){
            cout<<0<<endl;
        }else if(dif%8==0){
            cout<<dif/8<<endl;
        }else{
            cout<<dif/8+1<<endl;
        }
    }
    

    return 0;
}