#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
string s;
cin>>s;
int n=s.size(),x;
if(n%2!=0)x=n/2;
else x=n/2-1;
sort(s.begin(),s.end());
for(int i=x;i<n;i++){
 if(i!=n-1)cout<<s[i]<<'+';
 else cout<<s[i]<<"\n";
}

return 0;
}
