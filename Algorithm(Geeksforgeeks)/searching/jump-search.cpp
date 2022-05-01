#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;


/* Time Complexity : O(√n)
The time complexity of Jump Search is between
Linear Search O(n) and Binary Search O(Log n)*/
int jump_search(int arr[],int n,int x)
{
    int step,temp_step;
    step=temp_step=sqrt(n);
    int prev=0;

    while(arr[min(temp_step,n)-1]<x)
    {
        prev=temp_step;
        temp_step+=step;
        if(prev>=n)return -1;
    }
    while(arr[prev]<x)
    {
        prev++;
        if(prev==min(temp_step,n))
        {
            return -1;
        }
    }

    if(arr[prev]==x)return prev;

    return -1;


}

int main()
{
    fastIo


    int arr[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                  34, 55, 89, 144, 233, 377, 610
                };
    int x = 377;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<jump_search(arr,n, x);

    return 0;
}
