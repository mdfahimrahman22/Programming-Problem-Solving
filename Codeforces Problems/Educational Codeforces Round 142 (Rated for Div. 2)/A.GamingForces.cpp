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
    int t,n,count;
    cin>>t;
    while(t--){
        cin>>n;
        count=0;
        int a[n+10];
        int freq[110]={0};
        vector<int> aUnique;

        for(int i=0;i<n;i++){
            cin>>a[i];
            if(freq[a[i]]==0)aUnique.push_back(a[i]);
            freq[a[i]]++;
        }
        int f,num;
        for(int i=0;i<aUnique.size();i++){
            num=aUnique[i];
            f=freq[num];
            if(f==1){
                count++;
            }else{
                if(num==1){
                    count=count+(f/2+f%2);
                }else{
                    count+=f;
                }
            }
        }

        cout<<count<<endl;

    }
    

    return 0;
}