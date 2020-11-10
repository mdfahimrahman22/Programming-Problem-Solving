#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);
int n,c=0,x,y,z;
cin>>n;
int a[3];
for(int i=0;i<n;i++){
a[0]=0;
a[1]=0;
cin>>x>>y>>z;
a[x]++;
a[y]++;
a[z]++;
if(a[1]>=2)c++;

}

cout<<c<<endl;


return 0;
}
