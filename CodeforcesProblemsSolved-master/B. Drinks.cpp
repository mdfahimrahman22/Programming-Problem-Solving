#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("abc.txt","r",stdin);

    int n;
    cin>>n;
    float in,x=0.0;
    for(int i=0;i<n;i++){
        cin>>in;
        x+=(float)in;
    }

printf("%.12f\n",(float)x/n);




return 0;
}
