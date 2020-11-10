#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIO
//freopen("abc.txt","r",stdin);

int n;
int x,y,maximum=INT_MIN,tempy=0;
cin>>n;
for(int i=0;i<n;i++){
    cin>>x>>y;
//    temp1=-x+y;
//    temp2=temp1-x;
//    temp3=temp2+y;
//
    maximum=max(maximum,tempy-x+y);
    tempy=tempy-x+y;
}
cout<<maximum<<endl;



return 0;
}
