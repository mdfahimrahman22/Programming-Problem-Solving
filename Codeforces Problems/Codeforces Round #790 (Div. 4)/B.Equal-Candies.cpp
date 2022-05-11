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
        vector<int> a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int minVal=*min_element(a.begin(),a.end());
        int minCandiesToEat=0;
        for(int i=0;i<n;i++){
            minCandiesToEat+=(a[i]-minVal);
        }
        cout<<minCandiesToEat<<endl;
    }
    

    return 0;
}