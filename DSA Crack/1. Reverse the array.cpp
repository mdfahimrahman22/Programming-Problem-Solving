#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void reverseArray(int arr[],int start,int end)
{
    if(start>=end)return;
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    reverseArray(arr,start+1,end-1);
}

void printArr(int arr[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[]= {4, 5, 1, 2};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverseArray(arr,0,n-1);
    printArr(arr,n);
    return 0;
}
