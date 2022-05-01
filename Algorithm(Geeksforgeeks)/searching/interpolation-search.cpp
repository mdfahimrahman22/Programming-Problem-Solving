#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int interpolation_search(int arr[],int lo,int hi,int x)
{
    int pos;
    if(lo<=hi && arr[lo]<=x && arr[hi]>=x)
    {
        pos=lo+((hi-lo)/(arr[hi]-arr[lo]))*(x-arr[lo]);
        if(arr[pos]==x)return pos;
        if(arr[pos]<x)interpolation_search(arr,pos+1,hi,x);
        else interpolation_search(arr,lo,pos-1,x);
    }
}
int main()
{
    fastIo
    int arr[] = { 10, 12, 13, 16, 18, 19, 20, 21,
                  22, 23, 24, 33, 35, 42, 47
                };

    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 18;
    cout<<interpolation_search(arr, 0, n - 1, x);

    return 0;
}
