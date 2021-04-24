#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int n=3;
    int a[n];
    cin>>a[0]>>a[1]>>a[2];
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(a[i]>a[j])swap(a[i],a[j]);
        }
    }
    cout<<a[1]<<"\n";



    return 0;
}

