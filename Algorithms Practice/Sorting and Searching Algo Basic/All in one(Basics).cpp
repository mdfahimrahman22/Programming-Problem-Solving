#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
void printArr(int a[],int n);
void bubbleSort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(a[j]>a[j+1])swap(a[j],a[j+1]);
        }
    }
}
void selectionSort(int a[],int n)
{
    int i,j,min_index;
    for(int i=0; i<n-1; i++)
    {
        min_index=i;
        for(j=i+1; j<n; j++)
        {
            if(a[j]<a[min_index])min_index=j;
        }
        swap(a[i],a[min_index]);
    }

}
void insertionSort(int a[],int n)
{
    int i,j,temp;
    for(i=1; i<n; i++)
    {
        temp=a[i];
        for(j=i-1; j>=0&&a[j]>temp; j--)
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }

}
void merge(int arr[],int left,int middle,int right)
{
    int n1=(middle-left+1),n2=(right-middle);
    int leftArr[n1],rightArr[n2];

    for(int i=0; i<n1; i++)
    {
        leftArr[i]=arr[left+i];
    }
    for(int j=0; j<n2; j++)
    {
        rightArr[j]=arr[middle+j+1];
    }
    int i=0,j=0,k=left;
    while(i<n1&&j<n2)
    {
        if(leftArr[i]<=rightArr[j])
            arr[k++]=leftArr[i++];
        else arr[k++]=rightArr[j++];
    }
    while(i<n1)arr[k++]=leftArr[i++];
    while(j<n2)arr[k++]=rightArr[j++];


}
void mergeSort(int a[],int left,int right)
{
    if(left>=right)return;
    int middle=(left+right-1)/2;
    mergeSort(a,left,middle);

    mergeSort(a,middle+1,right);
    merge(a,left,middle,right);

}
int makePartition(int a[],int low,int high)
{
    int pivot=a[high];
    int i=low-1;
    for(int j=low; j<high; j++)
        if(a[j]<=pivot)
            swap(a[++i],a[j]);
    swap(a[++i],a[high]);
    return i;
}
void quickSort(int a[],int low,int high)
{
    if(low<high)
    {
        int pivot=makePartition(a,low,high);
        quickSort(a,low,pivot-1);
        quickSort(a,pivot+1,high);
    }
}
int linearSearch(int a[],int n,int key)
{
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)return i;
    }
    return -1;
}
int binarySearch(int a[],int l,int r,int key)
{
    if(l<=r)
    {
        int mid=l+(r-l)/2;
        if(a[mid]==key)return mid;
        if(a[mid]>key)return binarySearch(a,l,mid-1,key);
        return binarySearch(a,mid+1,r,key);
    }
    return -1;
}
int main()
{
    int a[]= {45,67,75,47,25,895,436};
    int n=sizeof(a)/sizeof(a[0]);
//    bubbleSort(a,n);
//    selectionSort(a,n);
//    insertionSort(a,n);
//    mergeSort(a,0,n-1);
    quickSort(a,0,n-1);
    printArr(a,n);
//    int key=75;
//    int index=binarySearch(a,0,n,key);
//    cout<<"Searching "<<key<<":\n";
//    if(index!=-1)
//        cout<<"Found at "<<index+1<<endl;
//    else cout<<"Not found\n";
    return 0;
}

void printArr(int a[],int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

