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
        int n,s38=0;
        string s;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>s;
            if(s=="START38")s38++;
        }
        cout<<s38<<" "<<n-s38<<endl;
    }
    

    return 0;
}