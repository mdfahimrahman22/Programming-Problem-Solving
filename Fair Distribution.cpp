#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
int x,y;
cin>>x>>y;
int ans=(y/x+1)*x-y;
cout<<ans<<endl;
return 0;
}
