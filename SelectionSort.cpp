#include<bits/stdc++.h>
using namespace std;
void SelectionSort(int arr[], int size)
{
    for(int i =0;i<size-1;i++)
    {
        int min = i;
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[min])
            {
                min = j;
            }
        }
        if(min!=i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;

        }

    }
}
int main()
{
    int *ptr,size;
    cout<<"enter the length of array\n";
    cin>>size;
    ptr = new int[size];
    cout<<"element in the array is\n";
    for(int i=0;i<size;i++)
    {
        cin>>ptr[i];
    }
    cout<<"unsorted array is:"<<" ";
    for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }
    SelectionSort(ptr, size);
    cout<<"\n";
    cout<<"sorted array is"<<" ";
     for(int i=0;i<size;i++)
    {
        cout<<ptr[i]<<" ";
    }

        return 0;
}
