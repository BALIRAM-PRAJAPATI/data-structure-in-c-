#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int arr[], int size)
{
    int key = 0;
    int j = 0;
    for(int i = 1;i<size;i++)
    {
        key = arr[i];
        j = i-1;
        while(j>=0&&arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}
int main()
{
    int *p, size;
    cout<<"enter the length of array\n";
    cin>>size;
    p = new int[size];
    cout<<"enter the number of element\n";
    for(int i =0;i<size;i++)
    {
        cin>>p[i];
    }
    cout<<"number before sorting"<<" ";
    for(int i =0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
    InsertionSort(p, size);
    cout<<"\n";
    cout<<"number after sorting"<<" ";
    for(int i=0;i<size;i++)
    {
        cout<<p[i]<<" ";
    }
}
