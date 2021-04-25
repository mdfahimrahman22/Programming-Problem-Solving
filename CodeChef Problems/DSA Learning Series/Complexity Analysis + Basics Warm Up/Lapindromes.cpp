#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main()
{
    fastIo
    //freopen("input.txt","r",stdin);
    int t,len,halfLen;
    string s;
    cin>>t;
    while(t--){
     cin>>s;
     len=s.size();
     halfLen=len/2;
     int a[30]={0};
     int b[30]={0};
     for(int i=0;i<halfLen;i++){
        a[int(s[i])-97]++;
     }
     if(len%2!=0)halfLen++;
     for(int j=halfLen;j<len;j++){
        b[int(s[j])-97]++;
     }
     for(int i=0;i<26;i++){
        if(a[i]!=b[i]){
            cout<<"NO\n";
            break;
        }
        if(a[i]==b[i]&&i==25){
            cout<<"YES\n";
        }
     }
    }
    return 0;
}

