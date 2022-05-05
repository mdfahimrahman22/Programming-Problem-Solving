#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;
void printArray(int arr[], int size)
{
    for (int i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int heapify(int a[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n&&a[l]>a[largest])largest=l;
    if(r<n&&a[r]>a[largest])largest=r;
    if(largest!=i)
    {
        swap(a[i],a[largest]);
        heapify(a,n,largest);
    }
}

void heap_sort(int a[],int n)
{
    for(int i=n/2-1; i>=0; i--)
        heapify(a,n,i);

    for(int i=n-1; i>0; i--)
    {
        swap(a[0],a[i]);
        heapify(a,i,0);
    }

}

int main()
{
    fastIo
    int arr[] = {12,11,13,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    heap_sort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}


