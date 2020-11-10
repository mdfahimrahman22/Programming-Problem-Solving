#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("abc.txt","r",stdin);

int n;
cin>>n;
int a[n+10];
int mini=INT_MAX,pos_min,pos_max,maximum=INT_MIN;
for(int i=0;i<n;i++){
        cin>>a[i];
    if(mini>=a[i]){
        mini=a[i];
        pos_min=i;
    }
if(maximum<a[i]){
        maximum=a[i];
        pos_max=i;
    }
}
int ans;
if(pos_max<pos_min){
    ans=pos_max+(n-1-pos_min);
}
else{
    ans=pos_max+(n-1-pos_min)-1;
}


cout<<ans<<endl;

return 0;
}
