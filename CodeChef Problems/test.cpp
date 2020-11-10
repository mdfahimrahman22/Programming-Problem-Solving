#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> v(10, 0);
     for(int i=0;i<5;i++){
     int x;
     cin>>x;
     v.push_back(x);
     }

    int maxir= *max_element(v.begin(),v.end());
cout<<maxir;


return 0;
}
