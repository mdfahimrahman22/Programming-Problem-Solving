#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
fastIo

int x[]={3,6,10,15};
for(int i=1;i<=100000000;i++){

    if(x[0]%i==1 && x[1]%i==1 && x[2]%i==1 && x[3]%i==1){
        cout<<i<<endl;
    }
}


return 0;
}
