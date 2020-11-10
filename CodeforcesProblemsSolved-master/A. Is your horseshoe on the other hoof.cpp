#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO

int a[4];
int n=4,ans=0;
for(int i=0;i<n;i++){
cin>>a[i];
}
sort(a,a+n);
for(int i=0;i<n;i++){
if(a[i]==a[i+1]&&i!=n-1){
  ans++;
}

}


cout<<ans<<endl;

return 0;
}
