#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int n=s.length();
int a[n],k=0;
for(int i=0;i<n;i++){
   if(s[i]=='.'){
    a[k++]=0;
   }
   else if(s[i]=='-'&&s[i+1]=='.'){
    a[k++]=1;
    i++;
   }else if(s[i]=='-'&&s[i+1]=='-'){
    a[k++]=2;
    i++;
   }
 
}
for(int i=0;i<k;i++){
    cout<<a[i];
}
cout<<endl;
return 0;
}