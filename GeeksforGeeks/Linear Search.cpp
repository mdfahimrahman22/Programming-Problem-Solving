#include<bits/stdc++.h>
using namespace std;

int jumpSearch(int arr[],int n,int x)
{

    int stepSize=sqrt(n);
    int step=stepSize;
    int prev=0;

    while(arr[min(step,n)-1]<x)
    {
        prev=step;
        step+=stepSize;
        if(prev>=n)
        {
            return -1;
        }
    }

    while(arr[prev]<x)
    {
        prev++;
        if(prev==min(step,n))return -1;
    }
    if(arr[prev]==x)return prev;
    return -1;
}

int binarySearch(int arr[],int l,int r,int x)
{
    while(r>=l)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)return mid;

        if(arr[mid]>x)
        {
            r=mid-1;
        }

        if(arr[mid]<x)
        {
            l=mid+1;
        }
    }

    return -1;
}

int linearSearch(int arr[],int n,int x)
{

    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)return i;
    }
    return -1;

}


int main()
{

    int arr[]= { 2, 3, 4, 10, 40 };
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
//    int result = linearSearch(arr, n, x);
//    int result = binarySearch(arr, 0,n-1, x);
    int result=jumpSearch(arr,n,x);
    (result == -1)
    ? cout << "Element is not present in array"
           : cout << "Element is present at index " << result;

    return 0;
}
