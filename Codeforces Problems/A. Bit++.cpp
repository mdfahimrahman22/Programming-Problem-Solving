#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);
int n,c=0;
string s;
cin>>n;
for(int i=0;i<n;i++){
cin>>s;
if(s[0]=='+'){++c;}
else if(s[2]=='+'){c++;}
else if(s[0]=='-'){--c;}
else c--;
}
cout<<c<<endl;


return 0;
}
