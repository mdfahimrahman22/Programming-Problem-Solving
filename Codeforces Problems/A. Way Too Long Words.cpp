#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);

int n,l;
string s;
cin>>n;
for(int i=0;i<n;i++){
cin>>s;
l=s.size();
if(l>10){
    cout<<s[0]<<l-2<<s[l-1]<<"\n";
}else cout<<s<<endl;
}




return 0;
}
