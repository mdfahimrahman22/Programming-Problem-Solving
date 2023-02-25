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
        int a[5];
        int track1[10]={0};
        cin>>a[0]>>a[1]>>a[2]>>a[3];
        int count=0;
        for(int i=a[0];i<=a[1];i++){
            track1[i]=1;
            count++;
        }
        for(int i=a[2];i<=a[3];i++){
            if(track1[i]==0){
                count++;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}