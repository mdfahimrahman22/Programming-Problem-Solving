#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string s;
cin>>n;
cin>>s;
int pairNum=0;
for(int i=0;i<n;i++)
{
    if(s[i]==s[i+1]&&i!=n-1){
        pairNum++;
    }
}
cout<<pairNum<<endl;


return 0;
}
