#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);

int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int x,y,z;
x=(k*l)/nl;
y=c*d;
z=p/np;
cout<<(min(min(x,y),z)/n)<<endl;

return 0;
}
