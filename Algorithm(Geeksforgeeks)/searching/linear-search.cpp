#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

//Time complexity : O(n)
int linear_search_v1(int arr[],int n, int x)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==x)return i;
    }
    return -1;
}

/*Time complexity : O(n).Same as v1,
cause v1 uses 1 'if' condition and v2 uses 2 'if' conditions*/
int linear_search_v2(int arr[],int n,int x)
{
    int left=0;
    int right=n-1;
    while(left<=right)
    {
        if(arr[left]==x)
        {
            return left;
        }
        if(arr[right]==x)
        {
            return right;
        }
        left++;
        right--;
    }

    return -1;
}

int main()
{
    fastIo
    int arr[]= {2, 3, 4, 10, 40 };
    int x=10;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<linear_search_v2(arr,n,x)<<endl;

    return 0;
}
