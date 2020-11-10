#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int A[100];
int parent[100];
int F(int x,int parity){
    if(x==1){
        if((A[x]%2) == (parity%2) )
            return A[x];
        return 0;
    }
    if(( A[x]%2) == (parity%2) ){
        return A[x] + F(parent[x],parity);
    }else{
        return F(parent[x],parity);
    }
}
int main(){
fastIO
freopen("input.txt","r",stdin);
int n=10;
for(int i=0;i<n;i++){
    cin>>A[i];
}
for(int i=0;i<n;i++){
    cin>>parent[i];
}
cout<<F(5,A[5]%2);





return 0;
}
