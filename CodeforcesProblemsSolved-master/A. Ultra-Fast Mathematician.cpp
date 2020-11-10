#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("abc.txt","r",stdin);

string s1,s2;
cin>>s1>>s2;
int n=s1.length();
char c[n+10];
for(int i=0;i<n;i++)
{if(s1[i]!=s2[i])
    c[i]='1';
else c[i]='0';

}
for(int i=0;i<n;i++){
    cout<<c[i];
}
cout<<endl;
return 0;
}
