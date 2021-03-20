#include<bits/stdc++.h>
#define fastIo ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;

class MinHeap
{
    int *heap;
    int heap_size;
public:
    MinHeap(int arr[],int n)
    {
        heap=arr;
        heap_size=n;
        heapify();
        for(int i=0; i<n; i++)
        {
            Delete();
        }
    }
    int kthSmallest(int k){
    return heap[k-1];
    }
    void Delete()
    {
        swap(heap[heap_size-1],heap[0]);
        heap_size--;
        adjust(0);
    }
    void adjust(int i)
    {
        int j=i;
        while(left(j)<heap_size)
        {
            if(right(j)>=heap_size)
            {
                if(heap[j]<left_child(j))
                {
                    swap(heap[j],heap[left(j)]);
                }
                break;
            }
            else if(left_child(j)>right_child(j))
            {
                if(heap[j]<left_child(j))
                {
                    swap(heap[j],heap[left(j)]);
                    j=left(j);

                }
                else
                {
                    break;
                }
            }
            else
            {
                if(heap[j]<right_child(j))
                {
                    swap(heap[j],heap[right(j)]);
                    j=right(j);
                }
                else
                {
                    break;
                }
            }
        }



    }

    void printHeap(int n)
    {
        for(int i=0; i<n; i++)
        {
            cout<<heap[i]<<" ";
        }
        cout<<endl;

    }
    void heapify()
    {
        for(int i=heap_size/2; i>=0; i--)
        {
            heapify_adjust(i);
        }

    }
    void heapify_adjust(int i)
    {

        while(left(i)<heap_size)
        {
            if(left_child(i)>right_child(i))
            {
                if(heap[i]<left_child(i))
                {
                    swap(heap[i],heap[left(i)]);
                    i=left(i);
                }
                else
                {
                    break;
                }

            }
            else
            {
                if(heap[i]<right_child(i))
                {
                    swap(heap[i],heap[right(i)]);
                    i=right(i);
                }
                else
                {
                    break;
                }
            }
        }
    }
    int left_child(int i)
    {
        return heap[i*2+1];
    }
    int right_child(int i)
    {
        return heap[i*2+2];
    }
    int left(int i)
    {
        return i*2+1;
    }
    int right(int i)
    {
        return i*2+2;
    }
    int parent(int i)
    {
        return i/2;
    }
    int parent_node(int i)
    {
        return heap[i/2];
    }

};
int main()
{
    fastIo

    int arr[] = {7,10,4,20,15};
    int n=sizeof(arr)/sizeof(arr[0]),k=4;
    MinHeap mh(arr,n);
    cout << "K'th smallest element is " << mh.kthSmallest(k);

    return 0;
}
