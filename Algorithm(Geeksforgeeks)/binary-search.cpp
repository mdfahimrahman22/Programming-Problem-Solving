#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

//Time complexity : O(Log n)
int binary_search_rec(int arr[],int l,int r,int x)
{
    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if(arr[mid]==x)return mid;
        if(x>arr[mid])
            return binary_search_rec(arr,mid+1,r,x);
        else
            return binary_search_rec(arr,l,mid-1,x);
    }

    return -1;
}

int binary_search_it(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int mid=l+(r-l)/2;

        if(arr[mid]==x)return mid;
        if(x>arr[mid])
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }

    return -1;

}

int main()
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<binary_search_it(arr, 0, n - 1, x)<<endl;

    return 0;
}



