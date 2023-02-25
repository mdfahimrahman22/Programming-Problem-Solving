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
    
    int n,a;
    cin>>n;
    int arr[n];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp.insert(pair<int,int>(arr[i],2*arr[i]));
    }
    for(int i=0;i<n;i++){
        cout<<"Searching "<<2*arr[i]<<":\n";
        if(mp.count(2*arr[i])>0){
            cout<<arr[i]<<endl;
            break;
        };
    }

    return 0;
}