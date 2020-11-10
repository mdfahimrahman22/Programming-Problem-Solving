#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);
int n,x;
cin>>n;
unordered_map<int,int> m1;
unordered_map<int,int> m2;
for(int i=0;i<n;i++){
cin>>x;
if(m1[x]==0)
m1[x]=i+1;
m2[x]=i+1;
}
int num1_q;
cin>>num1_q;
unsigned long long int q,vasya_ans=0,petya_ans=0;
for(int i=0;i<num1_q;i++){
cin>>q;
vasya_ans+=m1[q];
petya_ans+=(n-m2[q]+1);
}
cout<<vasya_ans<<" "<<petya_ans<<endl;


return 0;}
