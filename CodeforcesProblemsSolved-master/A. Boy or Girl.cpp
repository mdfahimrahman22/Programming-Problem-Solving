#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
int v[30];
memset(v,0,sizeof(v));
string s;
cin>>s;
int n=s.size();
for(int i=0;i<n;i++){
v[(int)(s[i]-97)]++;
}
int sum=0;
for(int i=0;i<=25;i++){
if(v[i]==0){
    continue;
}else{
sum++;
}
}
if(sum%2!=0){
    cout<<"IGNORE HIM!\n";
}
else{
    cout<<"CHAT WITH HER!\n";
}


return 0;
}
