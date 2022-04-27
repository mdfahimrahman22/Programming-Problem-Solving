#include<bits/stdc++.h>
using namespace std;

int ternary_search(int arr[],int n,int x)
{
    int l=0,r=n;

    while(l<=r)
    {
        int m1=l+(r-l)/3;
        int m2= m1+(r-l)/3;
        if(arr[m1]==x)return m1;
        if(arr[m2]==x)return m2;
        if(x<arr[m1])r=m1-1;
        else if(x>arr[m2])l=m2+1;
        else
        {
            l=m1+1;
            r=m2-1;
        }
    }

}
int main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int x = 10;
    cout<<ternary_search(arr,n,x)<<endl;
    return 0;
}
