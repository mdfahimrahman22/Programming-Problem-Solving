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
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        int sum1=0,sum2=0;
        for(int i=0,j=5;i<3;i++,j--){
            sum1+=int(s[i]-'0');
            sum2+=int(s[j]-'0');
        }
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}