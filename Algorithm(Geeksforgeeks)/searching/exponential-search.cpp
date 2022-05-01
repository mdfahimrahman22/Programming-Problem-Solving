#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

int binarySearch(int arr[],int l,int r, int x)
{
    while(l<r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)return mid;
        if(arr[mid]>x)r=mid-1;
        else l=mid+1;
    }

    return -1;
}

/*Time complexity : O(log(n))*/
int exponential_search(int arr[],int n,int x)
{

    if(arr[0]==x)return 0;
    int i;
    for(i=1;i<n&&arr[i]<=x;i*=2);
    return binarySearch(arr,i/2,min(i,n-1),x);
}

int main()
{
    fastIo
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    cout<<exponential_search(arr,n,x)<<endl;

    return 0;
}
