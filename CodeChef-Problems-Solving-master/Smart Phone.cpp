#include<bits/stdc++.h>
using namespace std;

int main(){
   //freopen("abc.txt","r",stdin);

long long int n,in;
cin>>n;
vector<long long int> v(n);
v.clear();
for(long long int i=0;i<n;i++){
    cin>>in;
    v.push_back(in);
}
sort(v.begin(),v.begin()+n);
long long int maximum=INT_MIN;
for(long long int i=0;i<n;i++){
        if(maximum<=v[i]*(n-i))
        maximum=v[i]*(n-i);
}
cout<<maximum<<endl;

return 0;
}
