#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef unsigned long long int ll;
ll facto(int n){
ll ans=1;
for(int i=1;i<=n;i++){
    ans*=i;
}
return ans;
}
int main(){
    //freopen("abc.txt","r",stdin);
fast
int t;
cin>>t;
while(t--){
int n;
cin>>n;
ll a[n+10];
ll sum=0;
for(int i=0;i<n;i++){
    cin>>a[i];
    sum+=a[i]*facto(n-1);
}
ll ans=0;
for(int i=0;i<n;i++)
{ans+=sum*pow(10,i);
}
cout<<ans<<endl;
}
return 0;
}
