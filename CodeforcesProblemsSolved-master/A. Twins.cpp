#include<bits/stdc++.h>
using namespace std;
int main(){
int n,in;
cin>>n;
int sum=0;
vector<int> v;
for(int i=0;i<n;i++){
cin>>in;
sum+=in;
v.push_back(in);
}
int my_sum=0;
sort(v.begin(),v.end(),greater<int>());
for(int i=0;i<v.size();i++)
{
    my_sum+=v[i];
    if(my_sum>(sum-my_sum))
    {cout<<i+1<<endl;
    break;
    }

}
return 0;
}
