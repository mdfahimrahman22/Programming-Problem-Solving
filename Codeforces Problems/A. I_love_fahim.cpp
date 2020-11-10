#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("abc.txt","r",stdin);

int in,n,c=0;
cin>>n;
cin>>in;
int mini=in,maximum=in;
for(int i=1;i<n;i++){
    cin>>in;
    if(in>maximum){
        c++;
        maximum=in;
    }
    else if(in<mini){
    c++;
    mini=in;
    }
}


cout<<c<<endl;

return 0;
}
