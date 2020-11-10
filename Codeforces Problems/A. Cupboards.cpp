#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("abc.txt","r",stdin);

    int n,l,r,sum=0;
    cin>>n;
    vector<int> L(2,0),R(2,0);
    for(int i=0;i<n;i++){
        cin>>l>>r;
        L[l]++;
        R[r]++;
    }
    sum=min(L[0],L[1])+min(R[0],R[1]);
    cout<<sum<<endl;

return 0;
}
